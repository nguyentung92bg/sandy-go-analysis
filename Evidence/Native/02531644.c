/* IL2CPP: Dino.BusSand.Sdk.DinoAdProvider.Loaded$$.ctor
void Dino_BusSand_Sdk_DinoAdProvider_Loaded___ctor (Dino_BusSand_Sdk_DinoAdProvider_Loaded_o* __this, MaxSdkBase_AdInfo_o* info, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Sdk.DinoAdProvider.Loaded$$.ctor
   void Dino_BusSand_Sdk_DinoAdProvider_Loaded___ctor (Dino_BusSand_Sdk_DinoAdProvider_Loaded_o*
   __this, MaxSdkBase_AdInfo_o* info, const MethodInfo* method); */

void Dino_BusSand_Sdk_DinoAdProvider_Loaded___ctor_2431644(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if ((bRam0000000004f9cc20 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabd10);
    bRam0000000004f9cc20 = 1;
  }
  System_Object___ctor_4870e5c(param_1,0);
  if (param_2 != 0) {
    uVar1 = System_String__IsNullOrEmpty_46d2084(*(undefined8 *)(param_2 + 0x60),0);
    uVar2 = *(undefined8 *)(param_2 + 0x20);
    if ((uVar1 & 1) == 0) {
      uVar2 = System_String__Concat_46d2b84
                        (uVar2,*(undefined8 *)PTR_DAT_04cabd10,*(undefined8 *)(param_2 + 0x60),0);
    }
    if (param_1 != 0) {
      *(undefined8 *)(param_1 + 0x10) = uVar2;
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x10),uVar2);
      puVar3 = (undefined8 *)(param_1 + 0x18);
      *puVar3 = *(undefined8 *)(param_2 + 0x38);
      if (iRam00000000051c1b10 != 0) {
        FUN_02220bf0(1L << ((ulong)puVar3 >> 0xc & 0x3f),
                     ((ulong)puVar3 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

