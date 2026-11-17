/* IL2CPP: Dino.BusSand.View.WorldView$$Tex
UnityEngine_Texture2D_o* Dino_BusSand_View_WorldView__Tex (Dino_BusSand_View_WorldView_o* __this, System_String_o* n, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.WorldView$$Tex
   UnityEngine_Texture2D_o* Dino_BusSand_View_WorldView__Tex (Dino_BusSand_View_WorldView_o* __this,
   System_String_o* n, const MethodInfo* method); */

long * Dino_BusSand_View_WorldView__Tex_2406868(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long *aplStack_38 [2];
  
  puVar2 = PTR_DAT_04cab208;
  if ((bRam0000000004f9cb15 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab208);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9cb15 = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = Dino_BusSand_GameAssets__get_Instance_2374c6c(0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  uVar6 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
  if ((uVar6 & 1) == 0) {
    return (long *)0x0;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar7 = Dino_BusSand_GameAssets__get_Instance_2374c6c(0);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((bRam0000000004f9c817 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbb7d8,param_2,0);
    FUN_02132f7c(PTR_DAT_04cbb7e0);
    FUN_02132f7c(PTR_DAT_04cbb7e8);
    FUN_02132f7c(PTR_DAT_04cab208);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbb7f0);
    FUN_02132f7c(PTR_DAT_04cb4ef0);
    FUN_02132f7c(PTR_DAT_04cac3a8);
    bRam0000000004f9c817 = 1;
  }
  aplStack_38[0] = (long *)0x0;
  plVar8 = (long *)(lVar7 + 0x88);
  lVar3 = *plVar8;
  if (lVar3 == 0) {
    uVar5 = *(undefined8 *)(lVar7 + 0x38);
    if (*(int *)(*(long *)PTR_DAT_04cab208 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar7 = Dino_BusSand_GameAssets__Index_object__275a37c(uVar5,*(undefined8 *)PTR_DAT_04cbb7e8);
    *plVar8 = lVar7;
    thunk_FUN_02134474(plVar8,lVar7);
    lVar3 = *plVar8;
    if (lVar3 == 0) goto LAB_0247d0f8;
  }
  uVar6 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                    (lVar3,param_2,aplStack_38,*(undefined8 *)PTR_DAT_04cbb7d8);
  puVar2 = PTR_DAT_04cab208;
  if ((uVar6 & 1) != 0) {
    return aplStack_38[0];
  }
  lVar7 = *(long *)PTR_DAT_04cab208;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar7 = *(long *)puVar2;
  }
  lVar3 = **(long **)(lVar7 + 0xb8);
  if (lVar3 == 0) {
LAB_0247d064:
    plVar4 = (long *)0x0;
  }
  else {
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar3 = **(long **)(*(long *)puVar2 + 0xb8);
    }
    uVar5 = *(undefined8 *)PTR_DAT_04cbb7f0;
    if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar5 = System_Type__GetTypeFromHandle_483f0b4(uVar5,0);
    if (lVar3 == 0) goto LAB_0247d0f8;
    plVar4 = (long *)(**(code **)(lVar3 + 0x18))
                               (*(undefined8 *)(lVar3 + 0x40),param_2,uVar5,
                                *(undefined8 *)(lVar3 + 0x28));
    if (plVar4 == (long *)0x0) goto LAB_0247d064;
    if (*plVar4 != *(long *)PTR_DAT_04cb4ef0) {
      plVar4 = (long *)0x0;
    }
  }
  aplStack_38[0] = plVar4;
  if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar6 = UnityEngine_Object__op_Inequality_43c8dec(plVar4,0,0);
  if ((uVar6 & 1) == 0) {
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_GameAssets__Miss_237cae0(*(undefined8 *)PTR_DAT_04cac3a8,param_2);
  }
  else {
    if (*plVar8 == 0) {
LAB_0247d0f8:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
              (*plVar8,param_2,aplStack_38[0],*(undefined8 *)PTR_DAT_04cbb7e0);
  }
  return aplStack_38[0];
}

