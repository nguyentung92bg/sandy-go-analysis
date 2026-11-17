/* IL2CPP: Dino.BusSand.App.UI.GiftPackTicker$$Update
void Dino_BusSand_App_UI_GiftPackTicker__Update (Dino_BusSand_App_UI_GiftPackTicker_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.GiftPackTicker$$Update
   void Dino_BusSand_App_UI_GiftPackTicker__Update (Dino_BusSand_App_UI_GiftPackTicker_o* __this,
   const MethodInfo* method); */

void Dino_BusSand_App_UI_GiftPackTicker__Update_21ab894(long param_1)

{
  long lVar1;
  float fVar2;
  
  fVar2 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
  if (*(float *)(param_1 + 0x2c) <= fVar2) {
    fVar2 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
    lVar1 = *(long *)(param_1 + 0x20);
    *(float *)(param_1 + 0x2c) = fVar2 + *(float *)(param_1 + 0x28);
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
    }
  }
  return;
}

