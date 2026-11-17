/* IL2CPP: Dino.BusSand.App.UI.GuidePanel$$PlaceAt
void Dino_BusSand_App_UI_GuidePanel__PlaceAt (Dino_BusSand_App_UI_GuidePanel_o* __this, UnityEngine_RectTransform_o* rt, UnityEngine_Vector2_o screen, UnityEngine_Vector2_o offset, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.GuidePanel$$PlaceAt
   void Dino_BusSand_App_UI_GuidePanel__PlaceAt (Dino_BusSand_App_UI_GuidePanel_o* __this,
   UnityEngine_RectTransform_o* rt, UnityEngine_Vector2_o screen, UnityEngine_Vector2_o offset,
   const MethodInfo* method); */

void Dino_BusSand_App_UI_GuidePanel__PlaceAt_22cb940
               (undefined4 param_1,undefined4 param_2,float param_3,float param_4,long param_5,
               long param_6)

{
  undefined *puVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uStack_28;
  
  if ((bRam0000000004f9c381 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabda8);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    bRam0000000004f9c381 = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  uStack_28 = 0;
  if (param_6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  plVar2 = (long *)UnityEngine_Transform__get_parent_43d0d70(param_6,0);
  if (plVar2 == (long *)0x0) {
    plVar2 = (long *)0x0;
  }
  else if (*plVar2 != *(long *)PTR_DAT_04cabdb0) {
    plVar2 = (long *)0x0;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Equality_43c6f30(plVar2,0,0);
  if ((uVar3 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_5 + 0x50);
    if (*(int *)(*(long *)PTR_DAT_04cabda8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle_467e798
              (param_1,param_2,plVar2,uVar4,&uStack_28,0);
    UnityEngine_Transform__set_localPosition_43cfda8
              (param_3 + (float)uStack_28,param_4 + uStack_28._4_4_,0,param_6,0);
  }
  return;
}

