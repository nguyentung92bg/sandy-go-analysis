/* IL2CPP: Dino.Tracking.TrackingEventNotiReceive$$.ctor
void Dino_Tracking_TrackingEventNotiReceive___ctor (Dino_Tracking_TrackingEventNotiReceive_o* __this, System_String_o* notiCate, System_String_o* notiName, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.TrackingEventNotiReceive$$.ctor
   void Dino_Tracking_TrackingEventNotiReceive___ctor (Dino_Tracking_TrackingEventNotiReceive_o*
   __this, System_String_o* notiCate, System_String_o* notiName, const MethodInfo* method); */

void Dino_Tracking_TrackingEventNotiReceive___ctor_2479fc0
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar1 = PTR_DAT_04cc1b08;
                    /* try { // try from 02579fc8 to 02679fcf has its CatchHandler @ 0257a2d4 */
                    /* try { // try from 02579fe4 to 02679fef has its CatchHandler @ 0257a2d8 */
  if ((bRam0000000004f9cf1c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc1b08);
                    /* try { // try from 02579ffc to 0267a01b has its CatchHandler @ 0257a2dc */
    bRam0000000004f9cf1c = 1;
  }
                    /* try { // try from 0257a01c to 0267a0ab has its CatchHandler @ 025799d0 */
  Dino_Tracking_TrackingEventBase___ctor_24781e8(param_1,0,param_3,*(undefined8 *)puVar1);
  *(undefined8 *)(param_1 + 0x18) = param_2;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),param_2);
  puVar2 = (undefined8 *)(param_1 + 0x20);
  *puVar2 = param_3;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << ((ulong)puVar2 >> 0xc & 0x3f),
                 ((ulong)puVar2 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

