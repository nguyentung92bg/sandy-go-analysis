/* IL2CPP: Dino.BusSand.App.UI.HomeAtelier$$QaPullBack
void Dino_BusSand_App_UI_HomeAtelier__QaPullBack (Dino_BusSand_App_UI_HomeAtelier_o* __this, int32_t sheets, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HomeAtelier$$QaPullBack
   void Dino_BusSand_App_UI_HomeAtelier__QaPullBack (Dino_BusSand_App_UI_HomeAtelier_o* __this,
   int32_t sheets, const MethodInfo* method); */

void Dino_BusSand_App_UI_HomeAtelier__QaPullBack_22d48d8(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  *(undefined1 *)(param_1 + 0xc9) = 1;
  uVar2 = *(int *)(param_1 + 0x58) - 1;
  uVar2 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
  uVar1 = param_2;
  if ((int)uVar2 <= (int)param_2) {
    uVar1 = uVar2;
  }
  uVar2 = 0;
  if (-1 < (int)param_2) {
    uVar2 = uVar1;
  }
  *(float *)(param_1 + 0xb8) = (float)(int)uVar2;
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0xec);
  return;
}

