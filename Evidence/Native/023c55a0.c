/* IL2CPP: Dino.BusSand.App.UI.PaiziSign$$SetIcon
void Dino_BusSand_App_UI_PaiziSign__SetIcon (UnityEngine_Transform_o* t, UnityEngine_Sprite_o* s, System_Nullable_Vector3__o localPos, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PaiziSign$$SetIcon
   void Dino_BusSand_App_UI_PaiziSign__SetIcon (UnityEngine_Transform_o* t, UnityEngine_Sprite_o* s,
   System_Nullable_Vector3__o localPos, const MethodInfo* method); */

void Dino_BusSand_App_UI_PaiziSign__SetIcon_22c55a0
               (long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  ulong uStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_DAT_04ca9ae8;
  uStack_40 = param_3;
  uStack_38 = param_4;
  if ((bRam0000000004f9c356 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad788);
    FUN_02132f7c(PTR_DAT_04cb4e80);
    FUN_02132f7c(PTR_DAT_04cb6890);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c356 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(param_1,0,0);
  plVar3 = (long *)0x0;
  if ((uVar2 & 1) != 0) {
    if (param_1 == 0) goto LAB_023c5724;
    plVar3 = (long *)UnityEngine_Component__GetComponent_object__26f97e8
                               (param_1,*(undefined8 *)PTR_DAT_04cad788);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Equality_43c6f30(plVar3,0,0);
  if ((uVar2 & 1) == 0) {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar2 = UnityEngine_Object__op_Inequality_43c8dec(param_2,0,0);
    if ((uVar2 & 1) != 0) {
      if (plVar3 == (long *)0x0) goto LAB_023c5724;
      UnityEngine_UI_Image__set_sprite_44a7258(plVar3,param_2,0);
      (**(code **)(*plVar3 + 0x2a8))
                (0x3f800000,0x3f800000,0x3f800000,0x3f800000,plVar3,*(undefined8 *)(*plVar3 + 0x2b0)
                );
      (**(code **)(*plVar3 + 0x3f8))(plVar3,*(undefined8 *)(*plVar3 + 0x400));
    }
    if ((param_3 & 0xff) != 0) {
      System_Nullable_Vector3___get_Value_2bd0e68(&uStack_40,*(undefined8 *)PTR_DAT_04cb6890);
      if (param_1 == 0) {
LAB_023c5724:
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      UnityEngine_Transform__set_localPosition_43cfda8(param_1,0);
    }
  }
  return;
}

