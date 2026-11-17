/* IL2CPP: Dino.BusSand.App.UI.PassportUi$$SetIcon
void Dino_BusSand_App_UI_PassportUi__SetIcon (UnityEngine_Transform_o* t, UnityEngine_Sprite_o* s, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PassportUi$$SetIcon
   void Dino_BusSand_App_UI_PassportUi__SetIcon (UnityEngine_Transform_o* t, UnityEngine_Sprite_o*
   s, const MethodInfo* method); */

void Dino_BusSand_App_UI_PassportUi__SetIcon_21dcb68(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9bb8d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad788);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9bb8d = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(param_1,0,0);
  plVar3 = (long *)0x0;
  if ((uVar2 & 1) != 0) {
    if (param_1 == 0) goto LAB_022dcca0;
    plVar3 = (long *)UnityEngine_Component__GetComponent_object__26f97e8
                               (param_1,*(undefined8 *)PTR_DAT_04cad788);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
                    /* try { // try from 022dcc04 to 023dcc0b has its CatchHandler @ 022dce98 */
  uVar2 = UnityEngine_Object__op_Equality_43c6f30(plVar3,0,0);
  if ((uVar2 & 1) == 0) {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar2 = UnityEngine_Object__op_Equality_43c6f30(param_2,0,0);
    if ((uVar2 & 1) == 0) {
      if (plVar3 != (long *)0x0) {
        UnityEngine_UI_Image__set_sprite_44a7258(plVar3,param_2,0);
        (**(code **)(*plVar3 + 0x2a8))
                  (0x3f800000,0x3f800000,0x3f800000,0x3f800000,plVar3,
                   *(undefined8 *)(*plVar3 + 0x2b0));
        puVar1 = PTR_DAT_04cfca30;
        if ((bRam0000000004faae31 & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cfca30,1,0);
          bRam0000000004faae31 = 1;
        }
        uVar2 = UnityEngine_UI_SetPropertyUtility__SetStruct_bool__28b837c
                          ((long)plVar3 + 0xec,1,*(undefined8 *)puVar1);
        if ((uVar2 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x045afb4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x2f8))(plVar3,*(undefined8 *)(*plVar3 + 0x300));
          return;
        }
        return;
      }
LAB_022dcca0:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  return;
}

