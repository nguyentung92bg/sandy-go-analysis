/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleStartPanel$$.cctor
void Dino_BusSand_App_UI_BattleRoyaleStartPanel___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleStartPanel$$.cctor
   void Dino_BusSand_App_UI_BattleRoyaleStartPanel___cctor (const MethodInfo* method); */

void Dino_BusSand_App_UI_BattleRoyaleStartPanel___cctor_219a934(void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  
                    /* try { // try from 0229a934 to 0239a96f has its CatchHandler @ 0229a8f8 */
  puVar1 = PTR_DAT_04caa038;
  if ((bRam0000000004f9b9e7 & 1) == 0) {
                    /* catch() { ... } // from try @ 0229a928 with catch @ 0229a954 */
    FUN_02132f7c(PTR_DAT_04cae3c8);
    FUN_02132f7c(PTR_DAT_04caa038);
                    /* try { // try from 0229a970 to 0239a9e3 has its CatchHandler @ 0229a970
                       catch() { ... } // from try @ 0229a970 with catch @ 0229a970
                       catch() { ... } // from try @ 0229a9f8 with catch @ 0229a970 */
    FUN_02132f7c(PTR_DAT_04cae480);
    FUN_02132f7c(PTR_DAT_04cae488);
    FUN_02132f7c(PTR_DAT_04cadd00);
    FUN_02132f7c(PTR_DAT_04cae490);
    bRam0000000004f9b9e7 = 1;
  }
  lVar2 = FUN_02133068(*(undefined8 *)puVar1,4);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)PTR_DAT_04cae480;
      thunk_FUN_02134474((undefined8 *)(lVar2 + 0x20));
      if ((*(uint *)(lVar2 + 0x18) & 0xfffffffe) != 0) {
                    /* try { // try from 0229a9e4 to 0239a9f7 has its CatchHandler @ 0229aa0c */
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)PTR_DAT_04cae490;
                    /* try { // try from 0229a9f8 to 0239aa23 has its CatchHandler @ 0229a970 */
        thunk_FUN_02134474((undefined8 *)(lVar2 + 0x28));
        if (2 < *(uint *)(lVar2 + 0x18)) {
                    /* catch() { ... } // from try @ 0229a9e4 with catch @ 0229aa0c */
          *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)PTR_DAT_04cae488;
          thunk_FUN_02134474((undefined8 *)(lVar2 + 0x30));
          puVar1 = PTR_DAT_04cae3c8;
          if ((*(uint *)(lVar2 + 0x18) & 0xfffffffc) != 0) {
            *(undefined8 *)(lVar2 + 0x38) = *(undefined8 *)PTR_DAT_04cadd00;
            thunk_FUN_02134474();
            **(long **)(*(long *)puVar1 + 0xb8) = lVar2;
            uVar3 = *(ulong *)(*(long *)puVar1 + 0xb8);
            if (iRam00000000051c1b10 != 0) {
              FUN_02220bf0(1L << (uVar3 >> 0xc & 0x3f),(uVar3 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
            }
            return;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_0213322c();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

