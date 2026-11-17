/* IL2CPP: Dino.BusSand.App.Meta.GiftPackTrack$$BreakIce
Dino_BusSand_App_Meta_GiftPackTrack_Gift_o* Dino_BusSand_App_Meta_GiftPackTrack__BreakIce (Dino_BusSand_App_Meta_GiftPackFeature_o* f, int32_t packId, System_String_o* source, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.GiftPackTrack$$BreakIce
   Dino_BusSand_App_Meta_GiftPackTrack_Gift_o* Dino_BusSand_App_Meta_GiftPackTrack__BreakIce
   (Dino_BusSand_App_Meta_GiftPackFeature_o* f, int32_t packId, System_String_o* source, const
   MethodInfo* method); */

long Dino_BusSand_App_Meta_GiftPackTrack__BreakIce_2240154
               (long param_1,undefined4 param_2,undefined8 param_3)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  
  if ((bRam0000000004f9bef2 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb0098);
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9bef2 = 1;
  }
  puVar2 = PTR_DAT_04cb0098;
  if (param_1 != 0) {
    lVar3 = Dino_BusSand_App_Meta_GiftPackFeature__Config_2234ae8(param_1,param_2);
    lVar4 = Dino_BusSand_App_Meta_GiftPackFeature__State_2234ff8(param_1,param_2);
    lVar5 = Dino_BusSand_App_Meta_GiftPackFeature__EndTime_223a7b8(param_1,param_2);
    lVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
    System_Object___ctor_4870e5c(lVar6,0);
    if (lVar3 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined4 *)(lVar3 + 0x18);
    }
    if (lVar6 != 0) {
      *(undefined8 *)(lVar6 + 0x20) = param_3;
      *(undefined4 *)(lVar6 + 0x10) = uVar8;
      thunk_FUN_02134474((undefined8 *)(lVar6 + 0x20),param_3);
      puVar2 = PTR_DAT_04caa200;
      if (lVar4 != 0) {
        *(undefined4 *)(lVar6 + 0x28) = *(undefined4 *)(lVar4 + 0x18);
        uVar7 = Dino_BusSand_App_Meta_GiftPackFeature__PackTotalDuration_223a660(param_1,param_2);
        *(undefined8 *)(lVar6 + 0x38) = uVar7;
        lVar3 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0();
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar2);
        }
        lVar3 = SUB168(SEXT816(lVar3) * SEXT816(-0x20c49ba5e353f7cf),8);
        uVar7 = System_Math__Max_4830fd4(0,((lVar3 >> 7) - (lVar3 >> 0x3f)) + lVar5,0);
        uVar8 = *(undefined4 *)(lVar4 + 0x14);
        bVar1 = *(byte *)(lVar4 + 0x6c);
        *(undefined8 *)(lVar6 + 0x40) = uVar7;
        *(long *)(lVar6 + 0x48) = lVar5;
        *(undefined4 *)(lVar6 + 0x2c) = uVar8;
        *(uint *)(lVar6 + 0x30) = (uint)bVar1;
        return lVar6;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

