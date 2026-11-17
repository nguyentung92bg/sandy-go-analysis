/* IL2CPP: Dino.BusSand.App.UI.YachtRacingTrackRow$$OnDisable
void Dino_BusSand_App_UI_YachtRacingTrackRow__OnDisable (Dino_BusSand_App_UI_YachtRacingTrackRow_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingTrackRow$$OnDisable
   void Dino_BusSand_App_UI_YachtRacingTrackRow__OnDisable
   (Dino_BusSand_App_UI_YachtRacingTrackRow_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_YachtRacingTrackRow__OnDisable_21f6fd0(long param_1)

{
  undefined8 *puVar1;
  
  *(undefined8 *)(param_1 + 200) = 0;
  thunk_FUN_02134474((undefined8 *)(param_1 + 200),0);
  *(undefined8 *)(param_1 + 0xd0) = 0;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0xd0),0);
  *(undefined8 *)(param_1 + 0xd8) = 0;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0xd8),0);
  puVar1 = (undefined8 *)(param_1 + 0xe0);
  *puVar1 = 0;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << ((ulong)puVar1 >> 0xc & 0x3f),
                 ((ulong)puVar1 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

