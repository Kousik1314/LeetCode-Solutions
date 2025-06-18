public class Trie {
    static class Node {
        Node[] children = new Node[26];
        boolean eow = false; // end of word
    }

    private Node root;

    public Trie() {
        root = new Node();
    }

    public void insert(String word) {
        Node temp = root;
        for (char ch : word.toCharArray()) {
            int index = ch - 'a';
            if (temp.children[index] == null) {
                temp.children[index] = new Node();
            }
            temp = temp.children[index];
        }
        temp.eow = true;
    }

    public boolean search(String word) {
        Node temp = root;
        for (char ch : word.toCharArray()) {
            int index = ch - 'a';
            if (temp.children[index] == null) return false;
            temp = temp.children[index];
        }
        return temp.eow;
    }

    public boolean startsWith(String prefix) {
        Node temp = root;
        for (char ch : prefix.toCharArray()) {
            int index = ch - 'a';
            if (temp.children[index] == null) return false;
            temp = temp.children[index];
        }
        return true;
    }
}
