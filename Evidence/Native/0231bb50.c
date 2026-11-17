/* IL2CPP: Dino.BusSand.App.Meta.JourneyTracking$$ConfigHash
uint32_t Dino_BusSand_App_Meta_JourneyTracking__ConfigHash (System_String_o* configId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.JourneyTracking$$ConfigHash
   uint32_t Dino_BusSand_App_Meta_JourneyTracking__ConfigHash (System_String_o* configId, const
   MethodInfo* method); */

undefined4 Dino_BusSand_App_Meta_JourneyTracking__ConfigHash_221bb50(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uStack_14;
  
  if ((bRam0000000004f9bda0 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa370);
    bRam0000000004f9bda0 = 1;
  }
  uStack_14 = 0;
  uVar3 = System_String__IsNullOrEmpty_46d2084(param_1,0);
  uVar2 = 0;
  if ((uVar3 & 1) == 0) {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224(0);
    }
    iVar1 = System_String__LastIndexOf_46d7e20(param_1,0x2d,0);
    if (iVar1 < 0) {
      uVar2 = 0;
    }
    else {
      uVar4 = System_String__Substring_46d6a94(param_1,iVar1 + 1,0);
      if (*(int *)(*(long *)PTR_DAT_04caa370 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04caa370);
      }
      uVar5 = System_Globalization_CultureInfo__get_InvariantCulture_47d1930(0);
      uVar3 = System_UInt32__TryParse_484c8e4(uVar4,0x203,uVar5,&uStack_14,0);
      uVar2 = uStack_14;
      if ((uVar3 & 1) == 0) {
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}

