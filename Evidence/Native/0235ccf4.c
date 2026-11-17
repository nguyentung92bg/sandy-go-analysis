/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingFeature.<RunProcessFly>d__29$$MoveNext
bool Dino_BusSand_App_Meta_YachtRacingFeature__RunProcessFly_d__29__MoveNext (Dino_BusSand_App_Meta_YachtRacingFeature__RunProcessFly_d__29_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingFeature.<RunProcessFly>d__29$$MoveNext
   bool Dino_BusSand_App_Meta_YachtRacingFeature__RunProcessFly_d__29__MoveNext
   (Dino_BusSand_App_Meta_YachtRacingFeature__RunProcessFly_d__29_o* __this, const MethodInfo*
   method); */

bool Dino_BusSand_App_Meta_YachtRacingFeature__RunProcessFly_d__29__MoveNext_225ccf4(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    uVar3 = Dino_BusSand_App_UI_YachtRacingHallButton__PlayProgressFly_21e8984(0);
    *(undefined8 *)(param_1 + 0x18) = uVar3;
    thunk_FUN_02134474();
    *(undefined4 *)(param_1 + 0x10) = 1;
  }
  else if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if ((*(long *)(param_1 + 0x20) == 0) ||
       (lVar2 = Dino_BusSand_App_Meta_YachtRacingFeature__get_Core_225ab38(), lVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    Dino_BusSand_App_Meta_YachtRacingCore__OnProcessFlyEnd_2258ab8(lVar2,0);
  }
  return iVar1 == 0;
}

