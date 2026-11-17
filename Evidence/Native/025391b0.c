/* IL2CPP: Dino.BusSand.Sdk.SandBusTrackingProvider$$.ctor
void Dino_BusSand_Sdk_SandBusTrackingProvider___ctor (Dino_BusSand_Sdk_SandBusTrackingProvider_o* __this, Dino_Common_Tracking_ITrackingProvider_o* qa, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Sdk.SandBusTrackingProvider$$.ctor
   void Dino_BusSand_Sdk_SandBusTrackingProvider___ctor (Dino_BusSand_Sdk_SandBusTrackingProvider_o*
   __this, Dino_Common_Tracking_ITrackingProvider_o* qa, const MethodInfo* method); */

void Dino_BusSand_Sdk_SandBusTrackingProvider___ctor_24391b0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar2 = PTR_DAT_04cbf3c8;
  puVar1 = PTR_DAT_04cbf3c0;
  if ((bRam0000000004f9cc61 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbf3c8);
    FUN_02132f7c(PTR_DAT_04cbf3c0);
    bRam0000000004f9cc61 = 1;
  }
  uVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Collections_Generic_List_DinoTrackingParameter____ctor_3a14094(uVar3,*(undefined8 *)puVar2)
  ;
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar3);
  System_Object___ctor_4870e5c(param_1,0);
  puVar4 = (undefined8 *)(param_1 + 0x10);
  *puVar4 = param_2;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << ((ulong)puVar4 >> 0xc & 0x3f),
                 ((ulong)puVar4 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

