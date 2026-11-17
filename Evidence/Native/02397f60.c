/* IL2CPP: Dino.BusSand.App.Meta.Journey.JourneyDecoder.Reader$$VarU
uint64_t Dino_BusSand_App_Meta_Journey_JourneyDecoder_Reader__VarU (Dino_BusSand_App_Meta_Journey_JourneyDecoder_Reader_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Journey.JourneyDecoder.Reader$$VarU
   uint64_t Dino_BusSand_App_Meta_Journey_JourneyDecoder_Reader__VarU
   (Dino_BusSand_App_Meta_Journey_JourneyDecoder_Reader_o* __this, const MethodInfo* method); */

ulong Dino_BusSand_App_Meta_Journey_JourneyDecoder_Reader__VarU_2297f60(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = 0;
  uVar5 = 0xfffffffffffffff9;
  do {
    uVar5 = uVar5 + 7;
    uVar1 = Dino_BusSand_App_Meta_Journey_JourneyDecoder_Reader__U8_2296c04(param_1);
    uVar4 = (ulong)(uVar1 & 0x7f) << (uVar5 & 0x3f) | uVar4;
    if ((uVar1 >> 7 & 1) == 0) {
      return uVar4;
    }
  } while (uVar5 < 0x39);
  thunk_FUN_021985a8(PTR_DAT_04cb3f78);
  uVar2 = thunk_FUN_0216e89c();
  uVar3 = thunk_FUN_021985a8(PTR_DAT_04cb5638);
  System_FormatException___ctor_4818b54(uVar2,uVar3,0);
  uVar3 = thunk_FUN_021985a8(PTR_DAT_04cb5640);
                    /* WARNING: Subroutine does not return */
  FUN_021330e8(uVar2,uVar3);
}

