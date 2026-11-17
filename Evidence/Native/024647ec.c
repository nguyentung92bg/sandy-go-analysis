/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$Toggle
System_Nullable_CheatAction__o Dino_BusSand_Cheat_CheatManager__Toggle (Dino_BusSand_Cheat_CheatManager_o* __this, System_String_o* name, int32_t a, bool on, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.CheatManager$$Toggle
   System_Nullable_CheatAction__o Dino_BusSand_Cheat_CheatManager__Toggle
   (Dino_BusSand_Cheat_CheatManager_o* __this, System_String_o* name, int32_t a, bool on, const
   MethodInfo* method); */

undefined8
Dino_BusSand_Cheat_CheatManager__Toggle_23647ec
          (long param_1,undefined8 param_2,undefined4 param_3,uint param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uStack_38;
  
  puVar1 = PTR_DAT_04caa038;
                    /* try { // try from 024647f0 to 025647fb has its CatchHandler @ 024640b4 */
                    /* catch() { ... } // from try @ 024646c8 with catch @ 024647f8
                       catch() { ... } // from try @ 02464734 with catch @ 024647f8
                       catch() { ... } // from try @ 02464798 with catch @ 024647f8
                       catch() { ... } // from try @ 024647e8 with catch @ 024647f8 */
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
  lVar2 = FUN_02133068(*(undefined8 *)puVar1,6);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = param_2;
      thunk_FUN_02134474((undefined8 *)(lVar2 + 0x20),param_2);
      puVar1 = PTR_DAT_04cba458;
      if ((*(uint *)(lVar2 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)PTR_DAT_04caccc8;
        thunk_FUN_02134474();
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar3 = Dino_BusSand_Cheat_CheatManager__OnOff_235c8bc(param_4 & 1);
        if (2 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x30) = uVar3;
          thunk_FUN_02134474((undefined8 *)(lVar2 + 0x30),uVar3);
          if ((*(uint *)(lVar2 + 0x18) & 0xfffffffc) != 0) {
            *(undefined8 *)(lVar2 + 0x38) = *(undefined8 *)PTR_DAT_04cba660;
            thunk_FUN_02134474();
            if (*(long *)(param_1 + 0x100) == 0) goto LAB_02464a60;
            uVar3 = Dino_BusSand_Cheat_CheatConfig__KeysOf_235b1c4
                              (*(long *)(param_1 + 0x100),param_3);
            if (4 < *(uint *)(lVar2 + 0x18)) {
              *(undefined8 *)(lVar2 + 0x40) = uVar3;
              thunk_FUN_02134474((undefined8 *)(lVar2 + 0x40),uVar3);
              puVar1 = PTR_DAT_04cba558;
              if (5 < *(uint *)(lVar2 + 0x18)) {
                *(undefined8 *)(lVar2 + 0x48) = *(undefined8 *)PTR_DAT_04cb2000;
                thunk_FUN_02134474();
                uVar3 = System_String__Concat_46d31f0(lVar2,0);
                lVar7 = *(long *)puVar1;
                lVar2 = 0xc0;
                if ((param_4 & 1) == 0) {
                  lVar2 = 0xb8;
                }
                lVar5 = *(long *)(lVar7 + 0x38);
                uVar6 = *(undefined8 *)(param_1 + lVar2);
                if (lVar5 == 0) {
                  FUN_0216b4cc(lVar7);
                  lVar5 = *(long *)(lVar7 + 0x38);
                }
                lVar2 = *(long *)(lVar5 + 0x10);
                if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
                  lVar2 = FUN_0216b470();
                }
                if (*(int *)(lVar2 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                lVar2 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
                if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
                  lVar2 = FUN_0216b470();
                }
                uVar4 = UnityEngine_GUILayout__Button_440f190
                                  (uVar3,uVar6,**(undefined8 **)(lVar2 + 0xb8),0);
                uStack_38 = 0;
                uVar3 = 0;
                if ((uVar4 & 1) != 0) {
                  System_Nullable_Int32Enum____ctor_2bcbf5c
                            (&uStack_38,param_3,*(undefined8 *)PTR_DAT_04cba870);
                  uVar3 = uStack_38;
                }
                return uVar3;
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

