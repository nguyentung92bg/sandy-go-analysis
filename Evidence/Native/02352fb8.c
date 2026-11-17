/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingCore$$get_HaveData
bool Dino_BusSand_App_Meta_YachtRacingCore__get_HaveData (Dino_BusSand_App_Meta_YachtRacingCore_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingCore$$get_HaveData
   bool Dino_BusSand_App_Meta_YachtRacingCore__get_HaveData
   (Dino_BusSand_App_Meta_YachtRacingCore_o* __this, const MethodInfo* method); */

bool Dino_BusSand_App_Meta_YachtRacingCore__get_HaveData_2252fb8(long param_1)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 != 0) {
    uVar2 = System_String__IsNullOrEmpty_46d2084(*(undefined8 *)(lVar3 + 0x58),0);
    if (((uVar2 & 1) == 0) && (*(long *)(lVar3 + 0x68) != 0)) {
      bVar1 = *(long *)(lVar3 + 0x70) != 0;
    }
    else {
      bVar1 = false;
    }
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

