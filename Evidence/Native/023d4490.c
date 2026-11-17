/* IL2CPP: Dino.BusSand.App.UI.HomeAtelier$$set_Stage
void Dino_BusSand_App_UI_HomeAtelier__set_Stage (Dino_BusSand_App_UI_HomeAtelier_o* __this, Dino_BusSand_App_UI_HomeStage_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HomeAtelier$$set_Stage
   void Dino_BusSand_App_UI_HomeAtelier__set_Stage (Dino_BusSand_App_UI_HomeAtelier_o* __this,
   Dino_BusSand_App_UI_HomeStage_o* value, const MethodInfo* method); */

void Dino_BusSand_App_UI_HomeAtelier__set_Stage_22d4490(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x100) = param_2;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << (param_1 + 0x100U >> 0xc & 0x3f),
                 (param_1 + 0x100U >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

