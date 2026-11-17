/* IL2CPP: Dino.BusSand.Sdk.SandBusTrackingProvider.<>c__DisplayClass17_0$$<RouteTrackingPlan>b__0
void Dino_BusSand_Sdk_SandBusTrackingProvider___c__DisplayClass17_0___RouteTrackingPlan_b__0 (Dino_BusSand_Sdk_SandBusTrackingProvider___c__DisplayClass17_0_o* __this, System_String_o* name, System_Collections_Generic_Dictionary_string__object__o* p, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Sdk.SandBusTrackingProvider.<>c__DisplayClass17_0$$<RouteTrackingPlan>b__0
   void Dino_BusSand_Sdk_SandBusTrackingProvider___c__DisplayClass17_0___RouteTrackingPlan_b__0
   (Dino_BusSand_Sdk_SandBusTrackingProvider___c__DisplayClass17_0_o* __this, System_String_o* name,
   System_Collections_Generic_Dictionary_string__object__o* p, const MethodInfo* method); */

void Dino_BusSand_Sdk_SandBusTrackingProvider___c__DisplayClass17_0___RouteTrackingPlan_b__0_243a7a8
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  long *plStack_38;
  
  puVar1 = PTR_DAT_04cbf1c8;
  if ((bRam0000000004f9cc6d & 1) == 0) {
                    /* try { // try from 0253a7dc to 0263a80f has its CatchHandler @ 0253ab04 */
    FUN_02132f7c(PTR_DAT_04caa218);
    FUN_02132f7c(PTR_DAT_04cbf1c8);
    FUN_02132f7c(PTR_DAT_04caabc8);
    bRam0000000004f9cc6d = 1;
  }
  plStack_38 = (long *)0x0;
  uVar3 = Dino_IGlobalService_object___TryGet_37f7630(&plStack_38,*(undefined8 *)puVar1);
  plVar2 = plStack_38;
  if (((uVar3 & 1) == 0) || (plStack_38 == (long *)0x0)) {
    if (*(char *)(param_1 + 0x10) != '\0') {
                    /* try { // try from 0253a884 to 0263a89f has its CatchHandler @ 0253ab28 */
      if (cRam0000000004f9cca7 == '\0') {
        FUN_02132f7c(PTR_DAT_04cbef68);
        cRam0000000004f9cca7 = '\x01';
      }
                    /* try { // try from 0253a8a0 to 0263a8cb has its CatchHandler @ 0253aac4 */
      if (*(char *)(*(long *)(*(long *)PTR_DAT_04cbef68 + 0xb8) + 9) != '\0') {
        if (*(int *)(*(long *)PTR_DAT_04caa218 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
                    /* try { // try from 0253a8cc to 0263a91f has its CatchHandler @ 0253ab20 */
        Databuckets_Analytics_DatabucketsTracker__Record_2136ec0(param_2,param_3,0);
      }
    }
  }
  else {
                    /* try { // try from 0253a820 to 0263a847 has its CatchHandler @ 0253aad0 */
    uVar4 = Dino_BusSand_Sdk_SandBusTrackingProvider__ToParams_2439cec(param_3);
    lVar6 = *plVar2;
    uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar3 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_04caabc8) {
          puVar5 = (undefined8 *)(lVar6 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_0253a8f0;
        }
        uVar3 = uVar3 - 1;
                    /* try { // try from 0253a85c to 0263a87b has its CatchHandler @ 0253ab14 */
        piVar7 = piVar7 + 4;
      } while (uVar3 != 0);
    }
    puVar5 = (undefined8 *)FUN_0216b7a4(plVar2,*(long *)PTR_DAT_04caabc8,2);
LAB_0253a8f0:
    (*(code *)*puVar5)(plVar2,param_2,uVar4,puVar5[1]);
  }
  return;
}

