/* IL2CPP: Dino.BusSand.App.Meta.ActivityContinueFeature.ContinueSequence$$Revive
void Dino_BusSand_App_Meta_ActivityContinueFeature_ContinueSequence__Revive (Dino_BusSand_App_Meta_ActivityContinueFeature_ContinueSequence_o* __this, int32_t buses, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.ActivityContinueFeature.ContinueSequence$$Revive
   void Dino_BusSand_App_Meta_ActivityContinueFeature_ContinueSequence__Revive
   (Dino_BusSand_App_Meta_ActivityContinueFeature_ContinueSequence_o* __this, int32_t buses, const
   MethodInfo* method); */

void Dino_BusSand_App_Meta_ActivityContinueFeature_ContinueSequence__Revive_221f13c
               (long param_1,undefined8 param_2)

{
  long lVar1;
  
  if (*(char *)(param_1 + 0x2c) == '\0') {
    lVar1 = *(long *)(param_1 + 0x18);
    *(undefined1 *)(param_1 + 0x2c) = 1;
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0231f164. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar1 + 0x18))
                (*(undefined8 *)(lVar1 + 0x40),param_2,*(undefined8 *)(lVar1 + 0x28));
      return;
    }
  }
  return;
}

