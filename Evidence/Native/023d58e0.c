/* IL2CPP: Dino.BusSand.App.UI.HomeAtelier$$StateOf
void Dino_BusSand_App_UI_HomeAtelier__StateOf (Dino_BusSand_App_UI_HomeAtelier_o* __this, int32_t level, float* paint, float* draw, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HomeAtelier$$StateOf
   void Dino_BusSand_App_UI_HomeAtelier__StateOf (Dino_BusSand_App_UI_HomeAtelier_o* __this, int32_t
   level, float* paint, float* draw, const MethodInfo* method); */

void Dino_BusSand_App_UI_HomeAtelier__StateOf_22d58e0
               (long param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(param_1 + 0x88);
  uVar2 = 0;
  uVar3 = 0x3f800000;
  if (*(int *)(param_1 + 0x58) <= param_2) {
    uVar3 = uVar2;
  }
  if (param_2 <= *(int *)(param_1 + 0x58)) {
    uVar2 = 0x3f800000;
  }
  *param_3 = uVar3;
  *param_4 = uVar2;
  if (iVar1 == param_2) {
    *param_3 = *(undefined4 *)(param_1 + 0x90);
  }
  if (*(int *)(param_1 + 0x8c) == param_2) {
    *param_4 = *(undefined4 *)(param_1 + 0x94);
  }
  return;
}

