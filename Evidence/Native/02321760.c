/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleCore$$get_PersonalType
int32_t Dino_BusSand_App_Meta_BattleRoyaleCore__get_PersonalType (Dino_BusSand_App_Meta_BattleRoyaleCore_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleCore$$get_PersonalType
   int32_t Dino_BusSand_App_Meta_BattleRoyaleCore__get_PersonalType
   (Dino_BusSand_App_Meta_BattleRoyaleCore_o* __this, const MethodInfo* method); */

undefined4 Dino_BusSand_App_Meta_BattleRoyaleCore__get_PersonalType_2221760(long param_1)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_FinalStagePerson_2221590();
  if ((lVar2 == 0) ||
     (lVar2 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_Config_22206d8(param_1), lVar2 == 0)) {
    return 1;
  }
  lVar2 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_Persona_2221430(param_1);
  if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar1 = *(uint *)(*(long *)(param_1 + 0x10) + 0x20);
  if ((bRam0000000004f9bdee & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cae228);
    FUN_02132f7c(PTR_DAT_04cae230);
    bRam0000000004f9bdee = 1;
  }
  if (lVar2 != 0) {
    lVar2 = *(long *)(lVar2 + 0x20);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if ((((int)uVar1 < *(int *)(lVar2 + 0x18)) && (-1 < (int)uVar1)) &&
       (*(int *)(lVar2 + 0x18) != 0)) {
      if (*(uint *)(lVar2 + 0x18) <= uVar1) {
        System_ThrowHelper__ThrowArgumentOutOfRange_IndexException_48509f0
                  (0,uVar1,*(undefined8 *)PTR_DAT_04cae230);
      }
      lVar2 = *(long *)(lVar2 + 0x10);
      if (lVar2 != 0) {
        if (uVar1 < *(uint *)(lVar2 + 0x18)) {
          return *(undefined4 *)(lVar2 + (long)(int)uVar1 * 4 + 0x20);
        }
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  return 1;
}

