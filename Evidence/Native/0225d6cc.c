/* IL2CPP: Dino.BusSand.App.SdkConfig$$get_Instance
Dino_BusSand_App_SdkConfig_o* Dino_BusSand_App_SdkConfig__get_Instance (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.SdkConfig$$get_Instance
   Dino_BusSand_App_SdkConfig_o* Dino_BusSand_App_SdkConfig__get_Instance (const MethodInfo*
   method); */

undefined8 Dino_BusSand_App_SdkConfig__get_Instance_215d6cc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  puVar2 = PTR_DAT_04cabec0;
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9b804 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabec8);
    FUN_02132f7c(PTR_DAT_04cabed0);
    FUN_02132f7c(PTR_DAT_04cabec0);
    FUN_02132f7c(PTR_DAT_04cabed8);
    bRam0000000004f9b804 = 1;
  }
  uVar4 = **(undefined8 **)(*(long *)puVar2 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Equality_43c6f30(uVar4,0,0);
  if ((uVar3 & 1) != 0) {
                    /* catch() { ... } // from try @ 0225d900 with catch @ 0225d764 */
    uVar4 = UnityEngine_Resources__Load_object__2891e2c
                      (*(undefined8 *)PTR_DAT_04cabed8,*(undefined8 *)PTR_DAT_04cabec8);
    **(undefined8 **)(*(long *)puVar2 + 0xb8) = uVar4;
                    /* try { // try from 0225d798 to 0235d7cb has its CatchHandler @ 0225d950 */
    thunk_FUN_02134474(*(undefined8 *)(*(long *)puVar2 + 0xb8),uVar4);
  }
  uVar4 = **(undefined8 **)(*(long *)puVar2 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Equality_43c6f30(uVar4,0,0);
  if ((uVar3 & 1) != 0) {
                    /* try { // try from 0225d7d8 to 0235d7e3 has its CatchHandler @ 0225d954 */
    uVar4 = UnityEngine_ScriptableObject__CreateInstance_object__28ad0cc
                      (*(undefined8 *)PTR_DAT_04cabed0);
    **(undefined8 **)(*(long *)puVar2 + 0xb8) = uVar4;
    thunk_FUN_02134474(*(undefined8 *)(*(long *)puVar2 + 0xb8),uVar4);
  }
                    /* try { // try from 0225d7f8 to 0235d80f has its CatchHandler @ 0225d948 */
  return **(undefined8 **)(*(long *)puVar2 + 0xb8);
}

