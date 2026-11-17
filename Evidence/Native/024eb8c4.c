/* IL2CPP: Dino.BusSand.View.StaticMerge$$PropMaterial
UnityEngine_Material_o* Dino_BusSand_View_StaticMerge__PropMaterial (UnityEngine_Shader_o* sh, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.StaticMerge$$PropMaterial
   UnityEngine_Material_o* Dino_BusSand_View_StaticMerge__PropMaterial (UnityEngine_Shader_o* sh,
   const MethodInfo* method); */

undefined8 Dino_BusSand_View_StaticMerge__PropMaterial_23eb8c4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar3 = PTR_DAT_04cbdc28;
  puVar1 = PTR_DAT_04ca9ae8;
                    /* try { // try from 024eb8e4 to 025eb8e7 has its CatchHandler @ 024ebc48 */
                    /* try { // try from 024eb8e8 to 025eb9c7 has its CatchHandler @ 024eb580 */
  if ((bRam0000000004f9ca9d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab208);
    FUN_02132f7c(PTR_DAT_04cab588);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbdc28);
    FUN_02132f7c(PTR_DAT_04cbdc30);
    FUN_02132f7c(PTR_DAT_04cbdc38);
    bRam0000000004f9ca9d = 1;
  }
  uVar7 = **(undefined8 **)(*(long *)puVar3 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
  puVar2 = PTR_DAT_04cab208;
  if ((uVar4 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_04cab208 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar7 = Dino_BusSand_GameAssets__get_Instance_2374c6c(0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
    uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
    uVar7 = 0;
    if ((uVar4 & 1) != 0) {
                    /* try { // try from 024eb9c8 to 025eb9cf has its CatchHandler @ 024ebc4c */
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar5 = Dino_BusSand_GameAssets__get_Instance_2374c6c(0);
                    /* try { // try from 024eb9d8 to 025eb9fb has its CatchHandler @ 024ebc8c */
      if (lVar5 == 0) goto LAB_024ebaac;
      uVar7 = Dino_BusSand_GameAssets__GetMaterial_237c614(lVar5,*(undefined8 *)PTR_DAT_04cbdc30,0);
    }
                    /* try { // try from 024eb9fc to 025ebb83 has its CatchHandler @ 024eb580 */
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
    uVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cab588);
    if ((uVar4 & 1) == 0) {
      UnityEngine_Material___ctor_437b5a8(uVar6,param_1,0);
    }
    else {
      UnityEngine_Material___ctor_437b63c(uVar6,uVar7,0);
    }
    **(undefined8 **)(*(long *)puVar3 + 0xb8) = uVar6;
    thunk_FUN_02134474(*(undefined8 *)(*(long *)puVar3 + 0xb8),uVar6);
    if (**(long **)(*(long *)puVar3 + 0xb8) == 0) {
LAB_024ebaac:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    UnityEngine_Object__set_name_43c72ec
              (**(long **)(*(long *)puVar3 + 0xb8),*(undefined8 *)PTR_DAT_04cbdc38,0);
  }
  return **(undefined8 **)(*(long *)puVar3 + 0xb8);
}

