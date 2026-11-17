/* IL2CPP: Dino.BusSand.App.UI.ActivityContinueUi$$FindDirect
UnityEngine_Transform_o* Dino_BusSand_App_UI_ActivityContinueUi__FindDirect (UnityEngine_Transform_o* root, System_String_o* name, UnityEngine_Transform_o* exclude, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ActivityContinueUi$$FindDirect
   UnityEngine_Transform_o* Dino_BusSand_App_UI_ActivityContinueUi__FindDirect
   (UnityEngine_Transform_o* root, System_String_o* name, UnityEngine_Transform_o* exclude, const
   MethodInfo* method); */

long Dino_BusSand_App_UI_ActivityContinueUi__FindDirect_2187820
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  
  if ((bRam0000000004f9b961 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad950);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9b961 = 1;
  }
  if ((param_1 != 0) &&
     (lVar3 = UnityEngine_Component__GetComponentsInChildren_object__26fa30c
                        (param_1,1,*(undefined8 *)PTR_DAT_04cad950), puVar2 = PTR_DAT_04ca9ae8,
     lVar3 != 0)) {
    uVar1 = *(uint *)(lVar3 + 0x18);
    if (0 < (int)uVar1) {
      uVar7 = 0;
      do {
        if (uVar1 <= uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        lVar6 = *(long *)(lVar3 + (long)(int)uVar7 * 8 + 0x20);
        if (lVar6 == 0) goto LAB_02287938;
        uVar4 = UnityEngine_Object__get_name_43c71a4(lVar6,0);
        uVar5 = System_String__op_Inequality_46d110c(uVar4,param_2,0);
        if ((uVar5 & 1) == 0) {
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar5 = UnityEngine_Object__op_Inequality_43c8dec(param_3,0,0);
          if ((uVar5 & 1) == 0) {
            return lVar6;
          }
          uVar5 = UnityEngine_Transform__IsChildOf_43d4dc4(lVar6,param_3,0);
          if ((uVar5 & 1) == 0) {
            return lVar6;
          }
        }
        uVar1 = *(uint *)(lVar3 + 0x18);
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < (int)uVar1);
    }
    return 0;
  }
LAB_02287938:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

