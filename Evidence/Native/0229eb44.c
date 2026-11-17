/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleWaitPanel$$.cctor
void Dino_BusSand_App_UI_BattleRoyaleWaitPanel___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleWaitPanel$$.cctor
   void Dino_BusSand_App_UI_BattleRoyaleWaitPanel___cctor (const MethodInfo* method); */

void Dino_BusSand_App_UI_BattleRoyaleWaitPanel___cctor_219eb44(void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  
  puVar1 = PTR_DAT_04caa038;
  if ((bRam0000000004f9ba0f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cae680);
    FUN_02132f7c(PTR_DAT_04caa038);
    FUN_02132f7c(PTR_DAT_04cade88);
    FUN_02132f7c(PTR_DAT_04cae530);
    FUN_02132f7c(PTR_DAT_04cae0e8);
    FUN_02132f7c(PTR_DAT_04cae6b8);
    FUN_02132f7c(PTR_DAT_04cae6c0);
    FUN_02132f7c(PTR_DAT_04cae6c8);
    FUN_02132f7c(PTR_DAT_04cae550);
    FUN_02132f7c(PTR_DAT_04cae6d0);
    bRam0000000004f9ba0f = 1;
  }
  lVar2 = FUN_02133068(*(undefined8 *)puVar1,8);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)PTR_DAT_04cae6b8;
      thunk_FUN_02134474((undefined8 *)(lVar2 + 0x20));
      if ((*(uint *)(lVar2 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)PTR_DAT_04cae0e8;
        thunk_FUN_02134474((undefined8 *)(lVar2 + 0x28));
        if (2 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)PTR_DAT_04cae6c8;
          thunk_FUN_02134474((undefined8 *)(lVar2 + 0x30));
          if ((*(uint *)(lVar2 + 0x18) & 0xfffffffc) != 0) {
            *(undefined8 *)(lVar2 + 0x38) = *(undefined8 *)PTR_DAT_04cae550;
            thunk_FUN_02134474((undefined8 *)(lVar2 + 0x38));
            if (4 < *(uint *)(lVar2 + 0x18)) {
              *(undefined8 *)(lVar2 + 0x40) = *(undefined8 *)PTR_DAT_04cae6d0;
              thunk_FUN_02134474((undefined8 *)(lVar2 + 0x40));
              if (5 < *(uint *)(lVar2 + 0x18)) {
                *(undefined8 *)(lVar2 + 0x48) = *(undefined8 *)PTR_DAT_04cae6c0;
                thunk_FUN_02134474((undefined8 *)(lVar2 + 0x48));
                if (6 < *(uint *)(lVar2 + 0x18)) {
                  *(undefined8 *)(lVar2 + 0x50) = *(undefined8 *)PTR_DAT_04cae530;
                  thunk_FUN_02134474((undefined8 *)(lVar2 + 0x50));
                  puVar1 = PTR_DAT_04cae680;
                  if ((*(uint *)(lVar2 + 0x18) & 0xfffffff8) != 0) {
                    *(undefined8 *)(lVar2 + 0x58) = *(undefined8 *)PTR_DAT_04cade88;
                    thunk_FUN_02134474();
                    **(long **)(*(long *)puVar1 + 0xb8) = lVar2;
                    uVar3 = *(ulong *)(*(long *)puVar1 + 0xb8);
                    /* try { // try from 0229ed54 to 0239ee4f has its CatchHandler @ 0229ed54
                       catch() { ... } // from try @ 0229ed54 with catch @ 0229ed54
                       catch() { ... } // from try @ 0229ee5c with catch @ 0229ed54 */
                    if (iRam00000000051c1b10 != 0) {
                      FUN_02220bf0(1L << (uVar3 >> 0xc & 0x3f),
                                   (uVar3 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
                    }
                    return;
                  }
                }
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

