/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$<DrawPanel>b__71_0
System_Nullable_CheatAction__o Dino_BusSand_Cheat_CheatManager___DrawPanel_b__71_0 (Dino_BusSand_Cheat_CheatManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$<DrawPanel>b__71_0
   System_Nullable_CheatAction__o Dino_BusSand_Cheat_CheatManager___DrawPanel_b__71_0
   (Dino_BusSand_Cheat_CheatManager_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_Cheat_CheatManager___DrawPanel_b__71_0_2368258(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uStack_38;
  
  if ((bRam0000000004f9c77f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbaa30);
    bRam0000000004f9c77f = 1;
  }
  puVar2 = PTR_DAT_04caa038;
  if (*(long *)(param_1 + 0x110) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  bVar1 = *(byte *)(*(long *)(param_1 + 0x110) + 0x10);
  uVar5 = *(undefined8 *)PTR_DAT_04cbaa30;
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
  lVar3 = FUN_02133068(*(undefined8 *)puVar2,6);
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) != 0) {
      *(undefined8 *)(lVar3 + 0x20) = uVar5;
      thunk_FUN_02134474((undefined8 *)(lVar3 + 0x20),uVar5);
      puVar2 = PTR_DAT_04cba458;
      if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)PTR_DAT_04caccc8;
        thunk_FUN_02134474();
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar5 = Dino_BusSand_Cheat_CheatManager__OnOff_235c8bc(bVar1 & 1);
        if (2 < *(uint *)(lVar3 + 0x18)) {
          *(undefined8 *)(lVar3 + 0x30) = uVar5;
          thunk_FUN_02134474((undefined8 *)(lVar3 + 0x30),uVar5);
          if ((*(uint *)(lVar3 + 0x18) & 0xfffffffc) != 0) {
            *(undefined8 *)(lVar3 + 0x38) = *(undefined8 *)PTR_DAT_04cba660;
            thunk_FUN_02134474();
            if (*(long *)(param_1 + 0x100) == 0) goto LAB_02464a60;
            uVar5 = Dino_BusSand_Cheat_CheatConfig__KeysOf_235b1c4(*(long *)(param_1 + 0x100),1);
            if (4 < *(uint *)(lVar3 + 0x18)) {
              *(undefined8 *)(lVar3 + 0x40) = uVar5;
              thunk_FUN_02134474((undefined8 *)(lVar3 + 0x40),uVar5);
              puVar2 = PTR_DAT_04cba558;
              if (5 < *(uint *)(lVar3 + 0x18)) {
                *(undefined8 *)(lVar3 + 0x48) = *(undefined8 *)PTR_DAT_04cb2000;
                thunk_FUN_02134474();
                uVar5 = System_String__Concat_46d31f0(lVar3,0);
                lVar8 = *(long *)puVar2;
                lVar3 = 0xc0;
                if ((bVar1 & 1) == 0) {
                  lVar3 = 0xb8;
                }
                lVar6 = *(long *)(lVar8 + 0x38);
                uVar7 = *(undefined8 *)(param_1 + lVar3);
                if (lVar6 == 0) {
                  FUN_0216b4cc(lVar8);
                  lVar6 = *(long *)(lVar8 + 0x38);
                }
                lVar3 = *(long *)(lVar6 + 0x10);
                if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
                  lVar3 = FUN_0216b470();
                }
                if (*(int *)(lVar3 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                lVar3 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
                if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
                  lVar3 = FUN_0216b470();
                }
                uVar4 = UnityEngine_GUILayout__Button_440f190
                                  (uVar5,uVar7,**(undefined8 **)(lVar3 + 0xb8),0);
                uStack_38 = 0;
                uVar5 = 0;
                if ((uVar4 & 1) != 0) {
                  System_Nullable_Int32Enum____ctor_2bcbf5c
                            (&uStack_38,1,*(undefined8 *)PTR_DAT_04cba870);
                  uVar5 = uStack_38;
                }
                return uVar5;
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

