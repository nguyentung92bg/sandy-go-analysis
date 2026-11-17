/* IL2CPP: Dino.BusSand.App.UI.CommentPopPanel.<>c$$.cctor
void Dino_BusSand_App_UI_CommentPopPanel___c___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.CommentPopPanel.<>c$$.cctor
   void Dino_BusSand_App_UI_CommentPopPanel___c___cctor (const MethodInfo* method); */

void Dino_BusSand_App_UI_CommentPopPanel___c___cctor_22a7360(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_DAT_04cb5ca0;
                    /* try { // try from 023a7374 to 024a7377 has its CatchHandler @ 023a73f4 */
                    /* try { // try from 023a7378 to 024a737b has its CatchHandler @ 023a73f0 */
  if ((bRam0000000004f9c28b & 1) == 0) {
                    /* try { // try from 023a737c to 024a737f has its CatchHandler @ 023a6ce8 */
                    /* try { // try from 023a7380 to 024a7383 has its CatchHandler @ 023a7398 */
                    /* try { // try from 023a7384 to 024a7387 has its CatchHandler @ 023a7394 */
    FUN_02132f7c(PTR_DAT_04cb5ca0);
                    /* catch() { ... } // from try @ 023a71c8 with catch @ 023a7388
                       try { // try from 023a7388 to 024a73b7 has its CatchHandler @ 023a6ce8 */
                    /* catch() { ... } // from try @ 023a71ac with catch @ 023a738c */
    bRam0000000004f9c28b = 1;
  }
                    /* catch() { ... } // from try @ 023a71a0 with catch @ 023a7390 */
                    /* catch() { ... } // from try @ 023a7384 with catch @ 023a7394 */
  uVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
                    /* catch() { ... } // from try @ 023a7380 with catch @ 023a7398 */
                    /* catch() { ... } // from try @ 023a717c with catch @ 023a739c */
  System_Object___ctor_4870e5c(uVar2,0);
  **(undefined8 **)(*(long *)puVar1 + 0xb8) = uVar2;
                    /* try { // try from 023a73b8 to 024a73bb has its CatchHandler @ 023a73dc */
                    /* try { // try from 023a73bc to 024a73df has its CatchHandler @ 023a6ce8 */
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << (*(ulong *)(*(long *)puVar1 + 0xb8) >> 0xc & 0x3f),
                 (*(ulong *)(*(long *)puVar1 + 0xb8) >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

