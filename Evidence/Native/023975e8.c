/* IL2CPP: Dino.BusSand.App.Meta.Journey.JourneyDecoder$$Name
System_String_o* Dino_BusSand_App_Meta_Journey_JourneyDecoder__Name (Dino_BusSand_App_Meta_Journey_JourneyDecoder_Reader_o* r, int32_t x, System_Collections_Generic_List_string__o* names, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Journey.JourneyDecoder$$Name
   System_String_o* Dino_BusSand_App_Meta_Journey_JourneyDecoder__Name
   (Dino_BusSand_App_Meta_Journey_JourneyDecoder_Reader_o* r, int32_t x,
   System_Collections_Generic_List_string__o* names, const MethodInfo* method); */

undefined8
Dino_BusSand_App_Meta_Journey_JourneyDecoder__Name_22975e8(long param_1,int param_2,long param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  int iStack_24;
  
  iStack_24 = param_2;
  if ((bRam0000000004f9c204 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab718);
    FUN_02132f7c(PTR_DAT_04caba60);
    FUN_02132f7c(PTR_DAT_04cb4190);
    bRam0000000004f9c204 = 1;
  }
  if (param_2 == 0) {
    if (param_1 != 0) {
      uVar2 = Dino_BusSand_App_Meta_Journey_JourneyDecoder_Reader__VarI_2296ce4(param_1);
      uVar4 = Dino_BusSand_App_Meta_Journey_JourneyDecoder_Reader__Ascii_229778c(param_1,uVar2);
      if (param_3 != 0) {
        lVar7 = *(long *)(param_3 + 0x10);
        lVar8 = *(long *)PTR_DAT_04cab718;
        *(int *)(param_3 + 0x1c) = *(int *)(param_3 + 0x1c) + 1;
        if (lVar7 != 0) {
          uVar1 = *(uint *)(param_3 + 0x18);
          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
            *(uint *)(param_3 + 0x18) = uVar1 + 1;
            puVar3 = (undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
            *puVar3 = uVar4;
            thunk_FUN_02134474(puVar3,uVar4);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize_3a81bf4
                      (param_3,uVar4,
                       *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
          }
          return uVar4;
        }
      }
    }
  }
  else if (param_3 != 0) {
    uVar1 = param_2 - 1;
    if (*(int *)(param_3 + 0x18) <= (int)uVar1) {
      uVar4 = System_Int32__ToString_482d750(&iStack_24,0);
      uVar5 = thunk_FUN_021985a8(PTR_DAT_04cb55e8);
      uVar6 = thunk_FUN_021985a8(PTR_DAT_04cb55f0);
      uVar4 = System_String__Concat_46d2b84(uVar5,uVar4,uVar6,0);
      thunk_FUN_021985a8(PTR_DAT_04cb3f78);
      uVar5 = thunk_FUN_0216e89c();
      System_FormatException___ctor_4818b54(uVar5,uVar4,0);
      uVar4 = thunk_FUN_021985a8(PTR_DAT_04cb55f8);
                    /* WARNING: Subroutine does not return */
      FUN_021330e8(uVar5,uVar4);
    }
    if (*(uint *)(param_3 + 0x18) <= uVar1) {
      System_ThrowHelper__ThrowArgumentOutOfRange_IndexException_48509f0
                (0,uVar1,*(undefined8 *)PTR_DAT_04cb4190);
    }
    lVar7 = *(long *)(param_3 + 0x10);
    if (lVar7 != 0) {
      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
        return *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
      }
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

