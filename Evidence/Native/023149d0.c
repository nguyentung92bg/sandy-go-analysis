/* IL2CPP: Dino.BusSand.App.Meta.JourneyTracking$$UiMark
void Dino_BusSand_App_Meta_JourneyTracking__UiMark (int32_t kind, int64_t a, int64_t b, System_String_o* name, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.Meta.JourneyTracking$$UiMark
   void Dino_BusSand_App_Meta_JourneyTracking__UiMark (int32_t kind, int64_t a, int64_t b,
   System_String_o* name, const MethodInfo* method); */

void Dino_BusSand_App_Meta_JourneyTracking__UiMark_22149d0
               (undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  bool bVar6;
  double dVar7;
  
  puVar2 = PTR_DAT_04caba90;
                    /* try { // try from 023149f0 to 024149ff has its CatchHandler @ 02314abc */
  if ((bRam0000000004f9bda8 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caba90);
    bRam0000000004f9bda8 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = Dino_BusSand_App_Meta_JourneyTracking__get_UiOn_221d814();
  if ((uVar4 & 1) != 0) {
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    dVar7 = (double)UnityEngine_Time__get_realtimeSinceStartupAsDouble_43cd760(0);
    lVar1 = -0x8000000000000000;
    if (dVar7 * _UNK_00e6a6f0 != INFINITY) {
      lVar1 = (long)(dVar7 * _UNK_00e6a6f0);
    }
    bVar3 = true;
    do {
      bVar6 = bVar3;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_Meta_JourneyTracking__EnsureUi_221d8dc();
      lVar5 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
                    /* try { // try from 02314aa8 to 02414ab3 has its CatchHandler @ 02314ab4 */
      uVar4 = Dino_BusSand_App_Meta_Journey_UiJourney__Mark_229a67c
                        (lVar5,lVar1,param_1,param_2,param_3,param_4,0);
                    /* catch() { ... } // from try @ 02314aa8 with catch @ 02314ab4
                       try { // try from 02314ab4 to 02414ac3 has its CatchHandler @ 023148d8 */
      if ((uVar4 & 1) != 0) {
        return;
      }
                    /* catch() { ... } // from try @ 023149f0 with catch @ 02314abc */
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_Meta_JourneyTracking__FlushUi_221dac8(1);
      bVar3 = false;
    } while (bVar6);
  }
  return;
}

