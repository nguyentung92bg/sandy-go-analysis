/* IL2CPP: Dino.Tracking.TrackingEventNotiSend$$.ctor
void Dino_Tracking_TrackingEventNotiSend___ctor (Dino_Tracking_TrackingEventNotiSend_o* __this, System_String_o* notiCate, System_String_o* notiName, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.TrackingEventNotiSend$$.ctor
   void Dino_Tracking_TrackingEventNotiSend___ctor (Dino_Tracking_TrackingEventNotiSend_o* __this,
   System_String_o* notiCate, System_String_o* notiName, const MethodInfo* method); */

void Dino_Tracking_TrackingEventNotiSend___ctor_247a0b8
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  
                    /* try { // try from 0257a0b8 to 0267a0bb has its CatchHandler @ 0257a2c0 */
  puVar1 = PTR_DAT_04cc1b20;
                    /* try { // try from 0257a0bc to 0267a0bf has its CatchHandler @ 0257a2bc */
                    /* try { // try from 0257a0c0 to 0267a0c3 has its CatchHandler @ 0257a2b8 */
                    /* try { // try from 0257a0c4 to 0267a10f has its CatchHandler @ 025799d0 */
  if ((bRam0000000004f9cf1f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc1b20);
    bRam0000000004f9cf1f = 1;
  }
                    /* try { // try from 0257a110 to 0267a113 has its CatchHandler @ 0257a214 */
                    /* try { // try from 0257a114 to 0267a11b has its CatchHandler @ 025799d0 */
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

