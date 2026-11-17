/* IL2CPP: Dino.Tracking.TrackingEventIapPurchaseFailed$$.ctor
void Dino_Tracking_TrackingEventIapPurchaseFailed___ctor (Dino_Tracking_TrackingEventIapPurchaseFailed_o* __this, System_String_o* placement, System_String_o* packName, double price, System_String_o* currency, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.TrackingEventIapPurchaseFailed$$.ctor
   void Dino_Tracking_TrackingEventIapPurchaseFailed___ctor
   (Dino_Tracking_TrackingEventIapPurchaseFailed_o* __this, System_String_o* placement,
   System_String_o* packName, double price, System_String_o* currency, const MethodInfo* method); */

void Dino_Tracking_TrackingEventIapPurchaseFailed___ctor_2478b48
               (undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar1 = PTR_DAT_04cc1988;
  if ((bRam0000000004f9cef4 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc1988);
    bRam0000000004f9cef4 = 1;
  }
  Dino_Tracking_TrackingEventIapBase_object____ctor_2f9a218(param_2,param_3,*(undefined8 *)puVar1);
  *(undefined8 *)(param_2 + 0x30) = param_4;
  thunk_FUN_02134474((undefined8 *)(param_2 + 0x30),param_4);
  puVar2 = (undefined8 *)(param_2 + 0x40);
  *puVar2 = param_5;
  *(undefined8 *)(param_2 + 0x38) = param_1;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << ((ulong)puVar2 >> 0xc & 0x3f),
                 ((ulong)puVar2 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

