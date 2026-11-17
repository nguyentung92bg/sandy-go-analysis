/* IL2CPP: Dino.BusSand.App.Meta.Journey.JourneyDecoder.Reader$$Ascii
System_String_o* Dino_BusSand_App_Meta_Journey_JourneyDecoder_Reader__Ascii (Dino_BusSand_App_Meta_Journey_JourneyDecoder_Reader_o* __this, int32_t n, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Journey.JourneyDecoder.Reader$$Ascii
   System_String_o* Dino_BusSand_App_Meta_Journey_JourneyDecoder_Reader__Ascii
   (Dino_BusSand_App_Meta_Journey_JourneyDecoder_Reader_o* __this, int32_t n, const MethodInfo*
   method); */

void Dino_BusSand_App_Meta_Journey_JourneyDecoder_Reader__Ascii_229778c(long param_1,int param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (-1 < param_2) {
    if (*(long *)(param_1 + 0x10) != 0) {
      if (*(int *)(*(long *)(param_1 + 0x10) + 0x18) - *(int *)(param_1 + 0x18) < param_2)
      goto LAB_023977fc;
      plVar1 = (long *)System_Text_Encoding__get_ASCII_46ec8d4(0);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x368))
                  (plVar1,*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18),param_2,
                   *(undefined8 *)(*plVar1 + 0x370));
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + param_2;
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
LAB_023977fc:
  thunk_FUN_021985a8(PTR_DAT_04cb3f78);
  uVar2 = thunk_FUN_0216e89c();
  uVar3 = thunk_FUN_021985a8(PTR_DAT_04cb5600);
  System_FormatException___ctor_4818b54(uVar2,uVar3,0);
  uVar3 = thunk_FUN_021985a8(PTR_DAT_04cb5608);
                    /* WARNING: Subroutine does not return */
  FUN_021330e8(uVar2,uVar3);
}

