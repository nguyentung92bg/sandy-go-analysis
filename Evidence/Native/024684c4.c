/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$<DrawPanel>b__71_6
System_Nullable_CheatAction__o Dino_BusSand_Cheat_CheatManager___DrawPanel_b__71_6 (Dino_BusSand_Cheat_CheatManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$<DrawPanel>b__71_6
   System_Nullable_CheatAction__o Dino_BusSand_Cheat_CheatManager___DrawPanel_b__71_6
   (Dino_BusSand_Cheat_CheatManager_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_Cheat_CheatManager___DrawPanel_b__71_6_23684c4(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uStack_38;
  
  puVar4 = PTR_DAT_04cbaa58;
  puVar3 = PTR_DAT_04cab380;
  if ((bRam0000000004f9c785 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab380);
    FUN_02132f7c(PTR_DAT_04cbaa58);
    bRam0000000004f9c785 = 1;
  }
  puVar2 = PTR_DAT_04caa038;
  uVar7 = *(undefined8 *)puVar4;
  bVar1 = *(byte *)(*(long *)(*(long *)puVar3 + 0xb8) + 1);
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
  lVar5 = FUN_02133068(*(undefined8 *)puVar2,6);
  if (lVar5 != 0) {
    if (*(int *)(lVar5 + 0x18) != 0) {
      *(undefined8 *)(lVar5 + 0x20) = uVar7;
      thunk_FUN_02134474((undefined8 *)(lVar5 + 0x20),uVar7);
      puVar3 = PTR_DAT_04cba458;
      if ((*(uint *)(lVar5 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar5 + 0x28) = *(undefined8 *)PTR_DAT_04caccc8;
        thunk_FUN_02134474();
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar7 = Dino_BusSand_Cheat_CheatManager__OnOff_235c8bc(bVar1 & 1);
        if (2 < *(uint *)(lVar5 + 0x18)) {
          *(undefined8 *)(lVar5 + 0x30) = uVar7;
          thunk_FUN_02134474((undefined8 *)(lVar5 + 0x30),uVar7);
          if ((*(uint *)(lVar5 + 0x18) & 0xfffffffc) != 0) {
            *(undefined8 *)(lVar5 + 0x38) = *(undefined8 *)PTR_DAT_04cba660;
            thunk_FUN_02134474();
            if (*(long *)(param_1 + 0x100) == 0) goto LAB_02464a60;
            uVar7 = Dino_BusSand_Cheat_CheatConfig__KeysOf_235b1c4(*(long *)(param_1 + 0x100),6);
            if (4 < *(uint *)(lVar5 + 0x18)) {
              *(undefined8 *)(lVar5 + 0x40) = uVar7;
              thunk_FUN_02134474((undefined8 *)(lVar5 + 0x40),uVar7);
              puVar3 = PTR_DAT_04cba558;
              if (5 < *(uint *)(lVar5 + 0x18)) {
                *(undefined8 *)(lVar5 + 0x48) = *(undefined8 *)PTR_DAT_04cb2000;
                thunk_FUN_02134474();
                uVar7 = System_String__Concat_46d31f0(lVar5,0);
                lVar10 = *(long *)puVar3;
                lVar5 = 0xc0;
                if ((bVar1 & 1) == 0) {
                  lVar5 = 0xb8;
                }
                lVar8 = *(long *)(lVar10 + 0x38);
                uVar9 = *(undefined8 *)(param_1 + lVar5);
                if (lVar8 == 0) {
                  FUN_0216b4cc(lVar10);
                  lVar8 = *(long *)(lVar10 + 0x38);
                }
                lVar5 = *(long *)(lVar8 + 0x10);
                if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
                  lVar5 = FUN_0216b470();
                }
                if (*(int *)(lVar5 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                lVar5 = *(long *)(*(long *)(lVar10 + 0x38) + 0x10);
                if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
                  lVar5 = FUN_0216b470();
                }
                uVar6 = UnityEngine_GUILayout__Button_440f190
                                  (uVar7,uVar9,**(undefined8 **)(lVar5 + 0xb8),0);
                uStack_38 = 0;
                uVar7 = 0;
                if ((uVar6 & 1) != 0) {
                  System_Nullable_Int32Enum____ctor_2bcbf5c
                            (&uStack_38,6,*(undefined8 *)PTR_DAT_04cba870);
                  uVar7 = uStack_38;
                }
                return uVar7;
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

