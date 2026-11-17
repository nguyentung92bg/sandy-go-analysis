/* IL2CPP: Dino.BusSand.App.Meta.Journey.JourneyBytes$$Rewind
void Dino_BusSand_App_Meta_Journey_JourneyBytes__Rewind (Dino_BusSand_App_Meta_Journey_JourneyBytes_o* __this, int32_t mark, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Journey.JourneyBytes$$Rewind
   void Dino_BusSand_App_Meta_Journey_JourneyBytes__Rewind
   (Dino_BusSand_App_Meta_Journey_JourneyBytes_o* __this, int32_t mark, const MethodInfo* method);
    */

void Dino_BusSand_App_Meta_Journey_JourneyBytes__Rewind_2295424(long param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  puVar1 = PTR_DAT_04caa200;
  if ((bRam0000000004f9c1fc & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9c1fc = 1;
  }
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = System_Math__Min_4831118(param_2,uVar2,0);
  uVar2 = System_Math__Max_4830fc8(0,uVar2,0);
  *(undefined1 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  return;
}

