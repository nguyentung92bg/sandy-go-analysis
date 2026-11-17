/* IL2CPP: Dino.BusSand.App.UI.UiKit$$Part
UnityEngine_Transform_o* Dino_BusSand_App_UI_UiKit__Part (UnityEngine_Transform_o* button, System_String_o* path, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x044d4b30) */
/* IL2CPP: Dino.BusSand.App.UI.UiKit$$Part
   UnityEngine_Transform_o* Dino_BusSand_App_UI_UiKit__Part (UnityEngine_Transform_o* button,
   System_String_o* path, const MethodInfo* method); */

long Dino_BusSand_App_UI_UiKit__Part_228d094(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  undefined8 uStack_28;
  
  if ((bRam0000000004f9c19d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb5248);
    bRam0000000004f9c19d = 1;
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar1 = UnityEngine_Transform__Find_43d4bec(param_1,param_2,0);
  if (lVar1 != 0) {
    return lVar1;
  }
  lVar1 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cb5248,param_2,0);
  if (lVar1 != 0) {
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
    if (param_1 != 0) {
      lVar4 = *(long *)(param_1 + 0x10);
      if (lVar4 != 0) {
        if (lVar1 == 0) {
          uStack_50 = 0;
          uStack_48 = 0;
        }
        else if (*(int *)(lVar1 + 0x10) == 0) {
          uVar2 = System_UIntPtr__op_Explicit_488617c(1,0);
          uStack_50 = System_UIntPtr__op_Explicit_4886184(uVar2,0);
          uStack_48 = 0;
        }
        else {
          if (cRam0000000004fa1b52 == '\0') {
            FUN_02132f7c(PTR_DAT_04cc73d8);
            cRam0000000004fa1b52 = '\x01';
          }
          uStack_40 = System_String__GetRawStringData_46cfab8(lVar1,0);
          uStack_38 = (ulong)*(uint *)(lVar1 + 0x10);
          uStack_50 = System_ReadOnlySpan_char___GetPinnableReference_2de139c
                                (&uStack_40,*(undefined8 *)PTR_DAT_04cf5680);
          uStack_48 = CONCAT44(uStack_48._4_4_,(undefined4)uStack_38);
          uStack_28 = uStack_50;
        }
        if (pcRam0000000004fa8ce8 == (code *)0x0) {
          pcRam0000000004fa8ce8 = (code *)FUN_02132f40(&UNK_00e29202);
        }
        uVar2 = (*pcRam0000000004fa8ce8)(lVar4,&uStack_50,0);
        lVar1 = FUN_04444d18(uVar2,*(undefined8 *)PTR_DAT_04cf5c60);
        return lVar1;
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

