/* IL2CPP: Dino.BusSand.App.UI.UIPanel$$FindPath
UnityEngine_Transform_o* Dino_BusSand_App_UI_UIPanel__FindPath (UnityEngine_Transform_o* root, System_String_o* path, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UIPanel$$FindPath
   UnityEngine_Transform_o* Dino_BusSand_App_UI_UIPanel__FindPath (UnityEngine_Transform_o* root,
   System_String_o* path, const MethodInfo* method); */

long Dino_BusSand_App_UI_UIPanel__FindPath_22007d4(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  if ((bRam0000000004f9bc95 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9bc95 = 1;
  }
  if ((param_2 != 0) && (lVar2 = System_String__Split_46d50c0(param_2,0x2f,0,0), lVar2 != 0)) {
    if (*(int *)(lVar2 + 0x18) == 0) {
LAB_0230091c:
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
    lVar3 = Dino_BusSand_App_UI_UIPanel__FindDeep_22003bc(param_1,*(undefined8 *)(lVar2 + 0x20));
    if (lVar3 == 0) {
      if (param_1 == 0) goto LAB_02300920;
      uVar4 = UnityEngine_Object__get_name_43c71a4(param_1,0);
      if (*(int *)(lVar2 + 0x18) == 0) goto LAB_0230091c;
      uVar5 = System_String__op_Equality_46d1108(uVar4,*(undefined8 *)(lVar2 + 0x20),0);
      lVar3 = param_1;
      if ((uVar5 & 1) == 0) {
        lVar3 = 0;
      }
    }
    puVar1 = PTR_DAT_04ca9ae8;
    if (1 < *(int *)(lVar2 + 0x18)) {
      lVar8 = 5;
      lVar7 = lVar3;
      do {
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar5 = UnityEngine_Object__op_Inequality_43c8dec(lVar7,0,0);
        if ((uVar5 & 1) == 0) {
          return lVar7;
        }
        if ((ulong)*(uint *)(lVar2 + 0x18) <= lVar8 - 4U) goto LAB_0230091c;
        if (lVar7 == 0) goto LAB_02300920;
        lVar3 = UnityEngine_Transform__Find_43d4bec(lVar7,*(undefined8 *)(lVar2 + lVar8 * 8),0);
        if (lVar3 == 0) {
          if ((ulong)*(uint *)(lVar2 + 0x18) <= lVar8 - 4U) goto LAB_0230091c;
          lVar3 = Dino_BusSand_App_UI_UIPanel__FindDeep_22003bc
                            (lVar7,*(undefined8 *)(lVar2 + lVar8 * 8));
        }
        lVar6 = lVar8 + -3;
        lVar8 = lVar8 + 1;
        lVar7 = lVar3;
      } while (lVar6 < *(int *)(lVar2 + 0x18));
    }
    return lVar3;
  }
LAB_02300920:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

