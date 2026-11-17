/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$<DrawPanel>b__71_7
System_Nullable_CheatAction__o Dino_BusSand_Cheat_CheatManager___DrawPanel_b__71_7 (Dino_BusSand_Cheat_CheatManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$<DrawPanel>b__71_7
   System_Nullable_CheatAction__o Dino_BusSand_Cheat_CheatManager___DrawPanel_b__71_7
   (Dino_BusSand_Cheat_CheatManager_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_Cheat_CheatManager___DrawPanel_b__71_7_2368538(long param_1)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uStack_38;
  
  if ((bRam0000000004f9c786 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbaa60);
    FUN_02132f7c(PTR_DAT_04cbaa68);
    bRam0000000004f9c786 = 1;
  }
  puVar3 = PTR_DAT_04caa038;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  bVar2 = *(byte *)(param_1 + 0x138);
  puVar1 = (undefined8 *)PTR_DAT_04cbaa68;
  if (bVar2 != 0) {
    puVar1 = (undefined8 *)PTR_DAT_04cbaa60;
  }
  uVar6 = *puVar1;
  if ((bRam0000000004f9c744 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cba558);
    FUN_02132f7c(PTR_DAT_04cba458);
    FUN_02132f7c(PTR_DAT_04cba870);
    FUN_02132f7c(PTR_DAT_04caa038);
    FUN_02132f7c(PTR_DAT_04caccc8);
    FUN_02132f7c(PTR_DAT_04cba660);
    FUN_02132f7c(PTR_DAT_04cb2000);
    bRam0000000004f9c744 = 1;
  }
  lVar4 = FUN_02133068(*(undefined8 *)puVar3,6);
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x18) != 0) {
      *(undefined8 *)(lVar4 + 0x20) = uVar6;
      thunk_FUN_02134474((undefined8 *)(lVar4 + 0x20),uVar6);
      puVar3 = PTR_DAT_04cba458;
      if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)PTR_DAT_04caccc8;
        thunk_FUN_02134474();
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar6 = Dino_BusSand_Cheat_CheatManager__OnOff_235c8bc(bVar2 & 1);
        if (2 < *(uint *)(lVar4 + 0x18)) {
          *(undefined8 *)(lVar4 + 0x30) = uVar6;
          thunk_FUN_02134474((undefined8 *)(lVar4 + 0x30),uVar6);
          if ((*(uint *)(lVar4 + 0x18) & 0xfffffffc) != 0) {
            *(undefined8 *)(lVar4 + 0x38) = *(undefined8 *)PTR_DAT_04cba660;
            thunk_FUN_02134474();
            if (*(long *)(param_1 + 0x100) == 0) goto LAB_02464a60;
            uVar6 = Dino_BusSand_Cheat_CheatConfig__KeysOf_235b1c4(*(long *)(param_1 + 0x100),0xe);
            if (4 < *(uint *)(lVar4 + 0x18)) {
              *(undefined8 *)(lVar4 + 0x40) = uVar6;
              thunk_FUN_02134474((undefined8 *)(lVar4 + 0x40),uVar6);
              puVar3 = PTR_DAT_04cba558;
              if (5 < *(uint *)(lVar4 + 0x18)) {
                *(undefined8 *)(lVar4 + 0x48) = *(undefined8 *)PTR_DAT_04cb2000;
                thunk_FUN_02134474();
                uVar6 = System_String__Concat_46d31f0(lVar4,0);
                lVar9 = *(long *)puVar3;
                lVar4 = 0xc0;
                if ((bVar2 & 1) == 0) {
                  lVar4 = 0xb8;
                }
                lVar7 = *(long *)(lVar9 + 0x38);
                uVar8 = *(undefined8 *)(param_1 + lVar4);
                if (lVar7 == 0) {
                  FUN_0216b4cc(lVar9);
                  lVar7 = *(long *)(lVar9 + 0x38);
                }
                lVar4 = *(long *)(lVar7 + 0x10);
                if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
                  lVar4 = FUN_0216b470();
                }
                if (*(int *)(lVar4 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                lVar4 = *(long *)(*(long *)(lVar9 + 0x38) + 0x10);
                if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
                  lVar4 = FUN_0216b470();
                }
                uVar5 = UnityEngine_GUILayout__Button_440f190
                                  (uVar6,uVar8,**(undefined8 **)(lVar4 + 0xb8),0);
                uStack_38 = 0;
                uVar6 = 0;
                if ((uVar5 & 1) != 0) {
                  System_Nullable_Int32Enum____ctor_2bcbf5c
                            (&uStack_38,0xe,*(undefined8 *)PTR_DAT_04cba870);
                  uVar6 = uStack_38;
                }
                return uVar6;
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_0213322c();
  }
LAB_02464a60:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

