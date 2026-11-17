/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleTipsPanel$$.cctor
void Dino_BusSand_App_UI_BattleRoyaleTipsPanel___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleTipsPanel$$.cctor
   void Dino_BusSand_App_UI_BattleRoyaleTipsPanel___cctor (const MethodInfo* method); */

void Dino_BusSand_App_UI_BattleRoyaleTipsPanel___cctor_219b9f0(void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  
  puVar1 = PTR_DAT_04caa038;
  if ((bRam0000000004f9b9ee & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cae4c0);
    FUN_02132f7c(PTR_DAT_04caa038);
    FUN_02132f7c(PTR_DAT_04cade88);
    FUN_02132f7c(PTR_DAT_04cae530);
    FUN_02132f7c(PTR_DAT_04cae0e8);
    FUN_02132f7c(PTR_DAT_04cae538);
    FUN_02132f7c(PTR_DAT_04cae540);
    FUN_02132f7c(PTR_DAT_04cae548);
    FUN_02132f7c(PTR_DAT_04cae550);
    FUN_02132f7c(PTR_DAT_04cae558);
    FUN_02132f7c(PTR_DAT_04cae560);
    bRam0000000004f9b9ee = 1;
  }
  lVar2 = FUN_02133068(*(undefined8 *)puVar1,10);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)PTR_DAT_04cae558;
      thunk_FUN_02134474((undefined8 *)(lVar2 + 0x20));
      if ((*(uint *)(lVar2 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)PTR_DAT_04cae0e8;
        thunk_FUN_02134474((undefined8 *)(lVar2 + 0x28));
        if (2 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)PTR_DAT_04cae538;
          thunk_FUN_02134474((undefined8 *)(lVar2 + 0x30));
          puVar1 = PTR_DAT_04cae550;
          if ((*(uint *)(lVar2 + 0x18) & 0xfffffffc) != 0) {
            *(undefined8 *)(lVar2 + 0x38) = *(undefined8 *)PTR_DAT_04cae550;
            thunk_FUN_02134474((undefined8 *)(lVar2 + 0x38));
            if (4 < *(uint *)(lVar2 + 0x18)) {
              *(undefined8 *)(lVar2 + 0x40) = *(undefined8 *)PTR_DAT_04cae540;
              thunk_FUN_02134474((undefined8 *)(lVar2 + 0x40));
              if (5 < *(uint *)(lVar2 + 0x18)) {
                *(undefined8 *)(lVar2 + 0x48) = *(undefined8 *)puVar1;
                thunk_FUN_02134474((undefined8 *)(lVar2 + 0x48));
                if (6 < *(uint *)(lVar2 + 0x18)) {
                  *(undefined8 *)(lVar2 + 0x50) = *(undefined8 *)PTR_DAT_04cae548;
                  thunk_FUN_02134474((undefined8 *)(lVar2 + 0x50));
                  if ((*(uint *)(lVar2 + 0x18) & 0xfffffff8) != 0) {
                    *(undefined8 *)(lVar2 + 0x58) = *(undefined8 *)PTR_DAT_04cae560;
                    thunk_FUN_02134474((undefined8 *)(lVar2 + 0x58));
                    if (8 < *(uint *)(lVar2 + 0x18)) {
                      *(undefined8 *)(lVar2 + 0x60) = *(undefined8 *)PTR_DAT_04cae530;
                      thunk_FUN_02134474((undefined8 *)(lVar2 + 0x60));
                      puVar1 = PTR_DAT_04cae4c0;
                      if (9 < *(uint *)(lVar2 + 0x18)) {
                        *(undefined8 *)(lVar2 + 0x68) = *(undefined8 *)PTR_DAT_04cade88;
                        thunk_FUN_02134474();
                        **(long **)(*(long *)puVar1 + 0xb8) = lVar2;
                        uVar3 = *(ulong *)(*(long *)puVar1 + 0xb8);
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
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_0213322c();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

