/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleResultPanel$$.cctor
void Dino_BusSand_App_UI_BattleRoyaleResultPanel___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleResultPanel$$.cctor
   void Dino_BusSand_App_UI_BattleRoyaleResultPanel___cctor (const MethodInfo* method); */

void Dino_BusSand_App_UI_BattleRoyaleResultPanel___cctor_21905d8(void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  
  puVar1 = PTR_DAT_04caa038;
  if ((bRam0000000004f9b9a5 & 1) == 0) {
                    /* try { // try from 022905f4 to 02390667 has its CatchHandler @ 02291468 */
    FUN_02132f7c(PTR_DAT_04cadf38);
    FUN_02132f7c(PTR_DAT_04caa038);
    FUN_02132f7c(PTR_DAT_04cadfe8);
    FUN_02132f7c(PTR_DAT_04cadff0);
    FUN_02132f7c(PTR_DAT_04cadff8);
    FUN_02132f7c(PTR_DAT_04cae000);
    FUN_02132f7c(PTR_DAT_04cae008);
    FUN_02132f7c(PTR_DAT_04cae010);
    bRam0000000004f9b9a5 = 1;
  }
  lVar2 = FUN_02133068(*(undefined8 *)puVar1,6);
                    /* try { // try from 02290668 to 0239067f has its CatchHandler @ 02290594 */
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
                    /* try { // try from 02290680 to 0239068b has its CatchHandler @ 02291438 */
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)PTR_DAT_04cae000;
                    /* try { // try from 0229068c to 0239111b has its CatchHandler @ 0229146c */
      thunk_FUN_02134474((undefined8 *)(lVar2 + 0x20));
      if ((*(uint *)(lVar2 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)PTR_DAT_04cadff0;
        thunk_FUN_02134474((undefined8 *)(lVar2 + 0x28));
        if (2 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)PTR_DAT_04cadff8;
          thunk_FUN_02134474((undefined8 *)(lVar2 + 0x30));
          if ((*(uint *)(lVar2 + 0x18) & 0xfffffffc) != 0) {
            *(undefined8 *)(lVar2 + 0x38) = *(undefined8 *)PTR_DAT_04cae010;
            thunk_FUN_02134474((undefined8 *)(lVar2 + 0x38));
            if (4 < *(uint *)(lVar2 + 0x18)) {
              *(undefined8 *)(lVar2 + 0x40) = *(undefined8 *)PTR_DAT_04cae008;
              thunk_FUN_02134474((undefined8 *)(lVar2 + 0x40));
              puVar1 = PTR_DAT_04cadf38;
              if (5 < *(uint *)(lVar2 + 0x18)) {
                *(undefined8 *)(lVar2 + 0x48) = *(undefined8 *)PTR_DAT_04cadfe8;
                thunk_FUN_02134474();
                **(long **)(*(long *)puVar1 + 0xb8) = lVar2;
                uVar3 = *(ulong *)(*(long *)puVar1 + 0xb8);
                if (iRam00000000051c1b10 != 0) {
                  FUN_02220bf0(1L << (uVar3 >> 0xc & 0x3f),(uVar3 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8)
                  ;
                }
                return;
              }
            }
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

