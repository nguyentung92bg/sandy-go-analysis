/* IL2CPP: Dino.BusSand.App.UI.PassportPanel$$Place
float Dino_BusSand_App_UI_PassportPanel__Place (UnityEngine_Transform_o* t, float top, float h, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PassportPanel$$Place
   float Dino_BusSand_App_UI_PassportPanel__Place (UnityEngine_Transform_o* t, float top, float h,
   const MethodInfo* method); */

float Dino_BusSand_App_UI_PassportPanel__Place_21d52cc(float param_1,float param_2,long *param_3)

{
  undefined *puVar1;
  ulong uVar2;
  float fVar3;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9bb51 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    bRam0000000004f9bb51 = 1;
  }
                    /* try { // try from 022d5318 to 023d538b has its CatchHandler @ 022d577c */
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Equality_43c6f30(param_3,0,0);
  fVar3 = 0.0;
  if ((uVar2 & 1) == 0) {
    if (param_3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224(0);
    }
    if (*param_3 != *(long *)PTR_DAT_04cabdb0) {
                    /* WARNING: Subroutine does not return */
      FUN_021335a4(param_3);
    }
    UnityEngine_RectTransform__set_anchorMax_43cf768(0x3f000000,0x3f800000,param_3,0);
    UnityEngine_RectTransform__set_anchorMin_43cf5e4(0x3f000000,0x3f800000,param_3,0);
    UnityEngine_RectTransform__set_pivot_43cfbf4(0x3f000000,0,param_3,0);
    UnityEngine_RectTransform__set_anchoredPosition_43cf8ec(0,-(param_1 + param_2),param_3,0);
    fVar3 = param_2;
  }
                    /* try { // try from 022d53b4 to 023d5547 has its CatchHandler @ 022d5780 */
  return fVar3;
}

