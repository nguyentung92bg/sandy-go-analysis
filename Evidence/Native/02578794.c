/* IL2CPP: Dino.Tracking.TrackingEventIapClose$$.ctor
void Dino_Tracking_TrackingEventIapClose___ctor (Dino_Tracking_TrackingEventIapClose_o* __this, System_String_o* placement, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.TrackingEventIapClose$$.ctor
   void Dino_Tracking_TrackingEventIapClose___ctor (Dino_Tracking_TrackingEventIapClose_o* __this,
   System_String_o* placement, const MethodInfo* method); */

void Dino_Tracking_TrackingEventIapClose___ctor_2478794(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar1 = PTR_DAT_04cc1978;
  if ((bRam0000000004f9cef1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc1978);
    bRam0000000004f9cef1 = 1;
  }
  Dino_Tracking_TrackingEventBase___ctor_24781e8(param_1,0,*(undefined8 *)puVar1);
  puVar2 = (undefined8 *)(param_1 + 0x18);
  *puVar2 = param_2;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << ((ulong)puVar2 >> 0xc & 0x3f),
                 ((ulong)puVar2 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

