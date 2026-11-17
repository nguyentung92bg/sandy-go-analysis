/* IL2CPP: Dino.BusSand.App.Meta.Journey.UiJourney$$Time
void Dino_BusSand_App_Meta_Journey_UiJourney__Time (Dino_BusSand_App_Meta_Journey_UiJourney_o* __this, int64_t nowMs, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Journey.UiJourney$$Time
   void Dino_BusSand_App_Meta_Journey_UiJourney__Time (Dino_BusSand_App_Meta_Journey_UiJourney_o*
   __this, int64_t nowMs, const MethodInfo* method); */

void Dino_BusSand_App_Meta_Journey_UiJourney__Time_229a7e0(long param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_04caa200;
  if ((bRam0000000004f9c218 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9c218 = 1;
  }
  lVar3 = *(long *)(param_1 + 0x30);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = System_Math__Max_4830fd4(0,((param_2 - lVar3) + 0x32) / 100,0);
  if (*(long *)(param_1 + 0x10) != 0) {
    Dino_BusSand_App_Meta_Journey_JourneyBytes__VarU_2295664
              (*(long *)(param_1 + 0x10),uVar2 & ((long)uVar2 >> 0x3f ^ 0xffffffffffffffffU));
    *(ulong *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + uVar2 * 100;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

