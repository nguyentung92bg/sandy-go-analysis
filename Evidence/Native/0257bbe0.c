/* IL2CPP: Dino.Tracking.DinoEventTracking$$TryGetService
bool Dino_Tracking_DinoEventTracking__TryGetService (Dino_ITrackingService_o** service, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.Tracking.DinoEventTracking$$TryGetService
   bool Dino_Tracking_DinoEventTracking__TryGetService (Dino_ITrackingService_o** service, const
   MethodInfo* method); */

uint Dino_Tracking_DinoEventTracking__TryGetService_247bbe0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  
                    /* try { // try from 0257bbe0 to 0267bbe7 has its CatchHandler @ 0257bd90 */
  puVar1 = PTR_DAT_04cbf1c8;
                    /* try { // try from 0257bbf8 to 0267bbff has its CatchHandler @ 0257bd94 */
  if ((bRam0000000004f9cf67 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caaba0);
    FUN_02132f7c(PTR_DAT_04cbf1c8);
    FUN_02132f7c(PTR_DAT_04cc1c30);
    FUN_02132f7c(PTR_DAT_04cc0168);
    bRam0000000004f9cf67 = 1;
  }
                    /* try { // try from 0257bc38 to 0267bc3b has its CatchHandler @ 0257bda0 */
  uVar3 = Dino_IGlobalService_object___TryGet_37f7630(param_1,*(undefined8 *)puVar1);
  puVar2 = PTR_DAT_04cc1c30;
  puVar1 = PTR_DAT_04cc0168;
  if ((uVar3 & 1) == 0) {
                    /* try { // try from 0257bc64 to 0267bc67 has its CatchHandler @ 0257bd70 */
    if (*(int *)(*(long *)PTR_DAT_04caaba0 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_Debugger__LogError_2481bdc(*(undefined8 *)puVar2,*(undefined8 *)puVar1,0);
  }
                    /* try { // try from 0257bc84 to 0267bc8b has its CatchHandler @ 0257bd78 */
  return uVar3 & 1;
}

