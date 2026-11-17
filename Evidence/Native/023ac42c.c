/* IL2CPP: Dino.BusSand.App.UI.CommerceUi$$FindMaterial
UnityEngine_Material_o* Dino_BusSand_App_UI_CommerceUi__FindMaterial (System_String_o* name, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.CommerceUi$$FindMaterial
   UnityEngine_Material_o* Dino_BusSand_App_UI_CommerceUi__FindMaterial (System_String_o* name,
   const MethodInfo* method); */

long Dino_BusSand_App_UI_CommerceUi__FindMaterial_22ac42c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  
  puVar2 = PTR_DAT_04cab490;
  if ((bRam0000000004f9c2ae & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb5ea0);
    FUN_02132f7c(PTR_DAT_04cab490);
    bRam0000000004f9c2ae = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar3 = Dino_BusSand_App_UiAssets__Material_2163924(param_1,0);
  lVar6 = *(long *)puVar1;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar6);
  }
  uVar4 = UnityEngine_Object__op_Inequality_43c8dec(lVar3,0,0);
  if ((uVar4 & 1) == 0) {
    lVar3 = UnityEngine_Resources__FindObjectsOfTypeAll_object__2891d1c
                      (*(undefined8 *)PTR_DAT_04cb5ea0);
    if (lVar3 == 0) {
LAB_023ac580:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (0 < (int)*(ulong *)(lVar3 + 0x18)) {
      uVar4 = 0;
      uVar7 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
      do {
        if (uVar7 <= uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        lVar6 = *(long *)(lVar3 + 0x20 + uVar4 * 8);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar7 = UnityEngine_Object__op_Inequality_43c8dec(lVar6,0,0);
        if ((uVar7 & 1) != 0) {
          if (lVar6 == 0) goto LAB_023ac580;
          uVar5 = UnityEngine_Object__get_name_43c71a4(lVar6,0);
          uVar7 = System_String__op_Equality_46d1108(uVar5,param_1,0);
          if ((uVar7 & 1) != 0) {
            return lVar6;
          }
        }
        uVar7 = (ulong)*(uint *)(lVar3 + 0x18);
        uVar4 = uVar4 + 1;
      } while ((long)uVar4 < (long)(int)*(uint *)(lVar3 + 0x18));
    }
    lVar3 = 0;
  }
  return lVar3;
}

