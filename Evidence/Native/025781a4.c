/* IL2CPP: Dino.Tracking.TrackingEventAdOfferShown$$.ctor
void Dino_Tracking_TrackingEventAdOfferShown___ctor (Dino_Tracking_TrackingEventAdOfferShown_o* __this, System_String_o* adFormat, System_String_o* placement, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.TrackingEventAdOfferShown$$.ctor
   void Dino_Tracking_TrackingEventAdOfferShown___ctor (Dino_Tracking_TrackingEventAdOfferShown_o*
   __this, System_String_o* adFormat, System_String_o* placement, const MethodInfo* method); */

void Dino_Tracking_TrackingEventAdOfferShown___ctor_24781a4
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
                    /* try { // try from 025781a8 to 026781af has its CatchHandler @ 025781c8 */
                    /* try { // try from 025781b0 to 026781f3 has its CatchHandler @ 02577c20 */
                    /* catch() { ... } // from try @ 02577ffc with catch @ 025781b8 */
  Dino_Common_TrackingScriptBase___ctor_2447ec8(param_1,0);
                    /* catch() { ... } // from try @ 02577e78 with catch @ 025781c4 */
                    /* catch() { ... } // from try @ 025781a8 with catch @ 025781c8 */
  *(undefined8 *)(param_1 + 0x18) = param_2;
                    /* catch() { ... } // from try @ 02577f84 with catch @ 025781cc */
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),param_2);
                    /* catch() { ... } // from try @ 02577e58 with catch @ 025781d0 */
  puVar1 = (undefined8 *)(param_1 + 0x20);
  *puVar1 = param_3;
                    /* catch() { ... } // from try @ 02577e34 with catch @ 025781d4 */
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << ((ulong)puVar1 >> 0xc & 0x3f),
                 ((ulong)puVar1 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

