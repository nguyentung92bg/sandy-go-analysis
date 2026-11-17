/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingCore$$SetBotLastWinCount
void Dino_BusSand_App_Meta_YachtRacingCore__SetBotLastWinCount (Dino_BusSand_App_Meta_YachtRacingCore_o* __this, int32_t botId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingCore$$SetBotLastWinCount
   void Dino_BusSand_App_Meta_YachtRacingCore__SetBotLastWinCount
   (Dino_BusSand_App_Meta_YachtRacingCore_o* __this, int32_t botId, const MethodInfo* method); */

void Dino_BusSand_App_Meta_YachtRacingCore__SetBotLastWinCount_2258d54(long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  if ((bRam0000000004f9bff5 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caf718);
    FUN_02132f7c(PTR_DAT_04caf720);
    FUN_02132f7c(PTR_DAT_04caf728);
    FUN_02132f7c(PTR_DAT_04caf730);
    bRam0000000004f9bff5 = 1;
  }
  puVar2 = PTR_DAT_04caf720;
  puVar1 = PTR_DAT_04caf718;
  uStack_48 = 0;
  uStack_40 = 0;
  lStack_38 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x18), lVar3 != 0)) {
    System_Collections_Generic_List_object___GetEnumerator_3a825f0
              (&uStack_48,lVar3,*(undefined8 *)PTR_DAT_04caf730);
    while( true ) {
      uVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                        (&uStack_48,*(undefined8 *)puVar2);
      if ((uVar4 & 1) == 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                  (&uStack_48,*(undefined8 *)puVar1);
        lVar3 = *(long *)(param_1 + 0x28);
        if (lVar3 != 0) {
          (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
        }
        return;
      }
      if (lStack_38 == 0) break;
      if (*(int *)(lStack_38 + 0x10) == param_2) {
        *(undefined4 *)(lStack_38 + 0x18) = *(undefined4 *)(lStack_38 + 0x14);
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

