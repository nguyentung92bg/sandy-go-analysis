/* IL2CPP: Dino.BusSand.App.Meta.Journey.JourneyBytes$$.ctor
void Dino_BusSand_App_Meta_Journey_JourneyBytes___ctor (Dino_BusSand_App_Meta_Journey_JourneyBytes_o* __this, int32_t capacity, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Journey.JourneyBytes$$.ctor
   void Dino_BusSand_App_Meta_Journey_JourneyBytes___ctor
   (Dino_BusSand_App_Meta_Journey_JourneyBytes_o* __this, int32_t capacity, const MethodInfo*
   method); */

void Dino_BusSand_App_Meta_Journey_JourneyBytes___ctor_2295318(long param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  puVar1 = PTR_DAT_04caa200;
  if ((bRam0000000004f9c1fb & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caaad0);
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9c1fb = 1;
  }
  puVar2 = PTR_DAT_04caaad0;
  System_Object___ctor_4870e5c(param_1,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = System_Math__Max_4830fc8(0x10,param_2,0);
  *(int *)(param_1 + 0x1c) = (int)uVar4;
  *(int *)(param_1 + 0x20) = (int)uVar4;
  uVar3 = System_Math__Min_4831118(uVar4,0x100,0);
  uVar4 = FUN_02133068(*(undefined8 *)puVar2,uVar3);
  puVar5 = (undefined8 *)(param_1 + 0x10);
  *puVar5 = uVar4;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << ((ulong)puVar5 >> 0xc & 0x3f),
                 ((ulong)puVar5 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

