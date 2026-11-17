/* IL2CPP: Dino.BusSand.View.MaterialLibrary$$LitTemplate
UnityEngine_Material_o* Dino_BusSand_View_MaterialLibrary__LitTemplate (System_String_o* n, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.MaterialLibrary$$LitTemplate
   UnityEngine_Material_o* Dino_BusSand_View_MaterialLibrary__LitTemplate (System_String_o* n, const
   MethodInfo* method); */

undefined8 Dino_BusSand_View_MaterialLibrary__LitTemplate_23bab64(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar2 = PTR_DAT_04cab208;
  if ((bRam0000000004f9c99b & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab208);
    FUN_02132f7c(PTR_DAT_04cab588);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbcb68);
    bRam0000000004f9c99b = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = Dino_BusSand_GameAssets__get_Instance_2374c6c(0);
  lVar6 = *(long *)puVar1;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar6);
  }
  uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar3,0,0);
  uVar3 = 0;
  if ((uVar4 & 1) != 0) {
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar6 = Dino_BusSand_GameAssets__get_Instance_2374c6c(0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar3 = Dino_BusSand_GameAssets__GetMaterial_237c614(lVar6,param_1,0);
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar3,0,0);
  if ((uVar4 & 1) == 0) {
    uVar3 = UnityEngine_Shader__Find_43750d0(*(undefined8 *)PTR_DAT_04cbcb68,0);
    uVar5 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cab588);
    UnityEngine_Material___ctor_437b5a8(uVar5,uVar3,0);
  }
  else {
    uVar5 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cab588);
    UnityEngine_Material___ctor_437b63c(uVar5,uVar3,0);
  }
  return uVar5;
}

