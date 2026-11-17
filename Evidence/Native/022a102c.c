/* IL2CPP: Dino.BusSand.App.UI.ClimbTowerItemView$$F
UnityEngine_Transform_o* Dino_BusSand_App_UI_ClimbTowerItemView__F (Dino_BusSand_App_UI_ClimbTowerItemView_o* __this, System_String_o* path, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x044d4b30) */
/* IL2CPP: Dino.BusSand.App.UI.ClimbTowerItemView$$F
   UnityEngine_Transform_o* Dino_BusSand_App_UI_ClimbTowerItemView__F
   (Dino_BusSand_App_UI_ClimbTowerItemView_o* __this, System_String_o* path, const MethodInfo*
   method); */

undefined8 Dino_BusSand_App_UI_ClimbTowerItemView__F_21a102c(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  undefined8 uStack_28;
  
  lVar1 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (param_2 != 0) {
    if ((bRam0000000004fa8b6d & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cf7a00);
      FUN_02132f7c(PTR_DAT_04cf5680);
      FUN_02132f7c(PTR_DAT_04cd5630);
      FUN_02132f7c(PTR_DAT_04cf5c60);
      bRam0000000004fa8b6d = 1;
    }
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_28 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    if (lVar1 != 0) {
      lVar1 = *(long *)(lVar1 + 0x10);
      if (lVar1 != 0) {
        if (param_2 == 0) {
          uStack_50 = 0;
          uStack_48 = 0;
        }
        else if (*(int *)(param_2 + 0x10) == 0) {
          uVar2 = System_UIntPtr__op_Explicit_488617c(1,0);
          uStack_50 = System_UIntPtr__op_Explicit_4886184(uVar2,0);
          uStack_48 = 0;
        }
        else {
          if (cRam0000000004fa1b52 == '\0') {
            FUN_02132f7c(PTR_DAT_04cc73d8);
            cRam0000000004fa1b52 = '\x01';
          }
          uStack_40 = System_String__GetRawStringData_46cfab8(param_2,0);
          uStack_38 = (ulong)*(uint *)(param_2 + 0x10);
          uStack_50 = System_ReadOnlySpan_char___GetPinnableReference_2de139c
                                (&uStack_40,*(undefined8 *)PTR_DAT_04cf5680);
          uStack_48 = CONCAT44(uStack_48._4_4_,(undefined4)uStack_38);
          uStack_28 = uStack_50;
        }
        if (pcRam0000000004fa8ce8 == (code *)0x0) {
          pcRam0000000004fa8ce8 = (code *)FUN_02132f40(&UNK_00e29202);
        }
        uVar2 = (*pcRam0000000004fa8ce8)(lVar1,&uStack_50,0);
        uVar2 = FUN_04444d18(uVar2,*(undefined8 *)PTR_DAT_04cf5c60);
        return uVar2;
      }
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78();
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  thunk_FUN_021985a8(PTR_DAT_04cbe5c8,0,0);
  uVar2 = thunk_FUN_0216e89c();
  uVar3 = thunk_FUN_021985a8(PTR_DAT_04cf7c50);
  System_ArgumentNullException___ctor_47afb54(uVar2,uVar3,0);
  uVar3 = thunk_FUN_021985a8(PTR_DAT_04cf7c58);
                    /* WARNING: Subroutine does not return */
  FUN_021330e8(uVar2,uVar3);
}

