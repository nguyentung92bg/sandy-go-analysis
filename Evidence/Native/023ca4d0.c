/* IL2CPP: Dino.BusSand.App.UI.GuidePanel$$InsideHole
bool Dino_BusSand_App_UI_GuidePanel__InsideHole (Dino_BusSand_App_UI_GuidePanel_o* __this, UnityEngine_Vector2_o screen, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.GuidePanel$$InsideHole
   bool Dino_BusSand_App_UI_GuidePanel__InsideHole (Dino_BusSand_App_UI_GuidePanel_o* __this,
   UnityEngine_Vector2_o screen, const MethodInfo* method); */

bool Dino_BusSand_App_UI_GuidePanel__InsideHole_22ca4d0
               (undefined4 param_1,undefined4 param_2,long param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  undefined8 uStack_38;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c370 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabda8);
    bRam0000000004f9c370 = 1;
  }
  uVar3 = *(undefined8 *)(param_3 + 0x88);
  uStack_38 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Equality_43c6f30(uVar3,0,0);
  if (((uVar2 & 1) == 0) && (0.0 < *(float *)(param_3 + 0xd0))) {
    uVar4 = *(undefined8 *)(param_3 + 0x88);
    uVar3 = *(undefined8 *)(param_3 + 0x50);
    if (*(int *)(*(long *)PTR_DAT_04cabda8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar2 = UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle_467e798
                      (param_1,param_2,uVar4,uVar3,&uStack_38,0);
    if ((uVar2 & 1) != 0) {
      fVar5 = ((float)uStack_38 - (float)*(undefined8 *)(param_3 + 200)) /
              *(float *)(param_3 + 0xd0);
      fVar6 = ((float)((ulong)uStack_38 >> 0x20) -
              (float)((ulong)*(undefined8 *)(param_3 + 200) >> 0x20)) / *(float *)(param_3 + 0xd0);
      return fVar5 * fVar5 + fVar6 * fVar6 <= 1.0;
    }
  }
  return false;
}

