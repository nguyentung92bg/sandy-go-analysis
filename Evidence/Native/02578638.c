/* IL2CPP: Dino.Tracking.TrackingEventIapClick$$.ctor
void Dino_Tracking_TrackingEventIapClick___ctor (Dino_Tracking_TrackingEventIapClick_o* __this, System_String_o* placement, System_String_o* packName, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.TrackingEventIapClick$$.ctor
   void Dino_Tracking_TrackingEventIapClick___ctor (Dino_Tracking_TrackingEventIapClick_o* __this,
   System_String_o* placement, System_String_o* packName, const MethodInfo* method); */

void Dino_Tracking_TrackingEventIapClick___ctor_2478638
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar1 = PTR_DAT_04cc1968;
  if ((bRam0000000004f9ceee & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc1968);
    bRam0000000004f9ceee = 1;
  }
  Dino_Tracking_TrackingEventIapBase_object____ctor_2f9a218(param_1,param_2,*(undefined8 *)puVar1);
  puVar2 = (undefined8 *)(param_1 + 0x30);
  *puVar2 = param_3;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << ((ulong)puVar2 >> 0xc & 0x3f),
                 ((ulong)puVar2 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

